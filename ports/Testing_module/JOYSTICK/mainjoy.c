/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include "stm32l4xx_hal.h"
#include "stm32l4r9i_discovery.h"
#include "stm32l4r9i_discovery_io.h"
#include "../DISPLAY/log.h"
#include "mainjoy.h"
#include "../../../lib/lv_bindings/lvgl/lvgl.h"
#include "../DISPLAY/log.h"
/* Private typedef -----------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/
#define MFX_IRQ_PENDING_GPIO    0x01
//#define MFX_IRQ_PENDING_IDD     0x02
#define MFX_IRQ_PENDING_ERROR   0x04
//#define MFX_IRQ_PENDING_TS_DET  0x08
//#define MFX_IRQ_PENDING_TS_NE   0x10
//#define MFX_IRQ_PENDING_TS_TH   0x20
//#define MFX_IRQ_PENDING_TS_FULL 0x40
//#define MFX_IRQ_PENDING_TS_OVF  0x80

//extern __IO FlagStatus MfxItOccurred;
lv_indev_t * indev_button;
/* Joystick Status */
__IO JOYState_TypeDef JoyState = JOY_NONE;

/* MFX Interrupt Status */
//__IO FlagStatus MfxItOccurred = RESET;
static bool button_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data);
static int8_t button_get_pressed_id(void);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void joy_init(void)
{

    /*Initialize your button if you have*/
    


	 lv_indev_drv_t indev_drv;
    BSP_JOY_Init(JOY_MODE_EXTI);
    __HAL_RCC_I2C1_CLK_ENABLE();


    /*Register a button input device*/
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_BUTTON;
    indev_drv.read_cb = button_read;
    indev_button = lv_indev_drv_register(&indev_drv);

    /*Assign buttons to points on the screen*/
    static const lv_point_t btn_points[2] = {
            {100, 100},   /*Button 0 -> x:10; y:10*/
            {170, 170},  /*Button 1 -> x:40; y:100*/
    };
    lv_indev_set_button_points(indev_button, btn_points);
}

/* Will be called by the library to read the button */
bool button_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data)
{

     uint8_t last_btn = 0;

    /*Get the pressed button's ID*/
    int8_t btn_act = button_get_pressed_id();

    if(btn_act >= 0) {
        data->state = LV_INDEV_STATE_PR;
        last_btn = btn_act;
    } else {
        data->state = LV_INDEV_STATE_REL;
    }

    /*Save the last pressed button's ID*/
    data->btn_id = last_btn;

    /*Return `false` because we are not buffering and no more data to read*/
    return false;
}

/*Get ID  (0, 1, 2 ..) of the pressed button*/
static int8_t button_get_pressed_id(void)
{
    Mfx_Event();
    if(JoyState == JOY_LEFT)
        return 0;
    else if (JoyState == JOY_RIGHT)
        return 1;
    else 
        return -1;

}

void Mfx_Event(void)
{
  uint32_t irqPending;

  /* Reset joystick state */
  JoyState = JOY_NONE;

  irqPending = MFX_IO_Read(IO_I2C_ADDRESS, MFXSTM32L152_REG_ADR_IRQ_PENDING);

  /* GPIO IT from MFX */
  if(irqPending & MFX_IRQ_PENDING_GPIO)
  {
    uint32_t JoystickStatus;
    uint32_t statusGpio = BSP_IO_ITGetStatus(RIGHT_JOY_PIN | LEFT_JOY_PIN | UP_JOY_PIN | DOWN_JOY_PIN | TS_INT_PIN | SD_DETECT_PIN);

    JoystickStatus = statusGpio & (RIGHT_JOY_PIN | LEFT_JOY_PIN | UP_JOY_PIN | DOWN_JOY_PIN);

    if(JoystickStatus != 0)
    {
      if(JoystickStatus == RIGHT_JOY_PIN)
      {
      	log_debug("JOYRIGHT\r\n");
        JoyState = JOY_RIGHT;
      }
      else if(JoystickStatus == LEFT_JOY_PIN)
      {

      	log_debug("JOYLEFT\r\n");
        JoyState = JOY_LEFT;
      }
      else if(JoystickStatus == UP_JOY_PIN)
      {
        JoyState = JOY_UP;
     
      }
      else if(JoystickStatus == DOWN_JOY_PIN)
      {
        JoyState = JOY_DOWN;
   
      }
      else
      {
        JoyState = JOY_NONE;
      }
    }

    /* Insert a little delay to avoid debounce */
    HAL_Delay(5);

    /* Clear IO Expander IT */
    BSP_IO_ITClear(statusGpio);
  }
  irqPending &= ~MFX_IRQ_PENDING_GPIO;
  if(irqPending)
  {
    MFX_IO_Write(IO_I2C_ADDRESS, MFXSTM32L152_REG_ADR_IRQ_ACK, irqPending);
  }
   //MfxItOccurred = RESET;

  /* Re-enable MFX interrupt */
  HAL_NVIC_EnableIRQ(MFX_INT_EXTI_IRQn);
}
