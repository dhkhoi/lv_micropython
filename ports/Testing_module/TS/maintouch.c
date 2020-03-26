/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include "stm32l4xx_hal.h"
#include "stm32l4r9i_discovery.h"
#include "stm32l4r9i_discovery_io.h"
#include "stm32l4r9i_discovery_ts.h"
#include "../DISPLAY/log.h"
#include "../../../lib/lv_bindings/lvgl/lvgl.h"
/* Private typedef -----------------------------------------------------------*/
/* Private defines -----------------------------------------------------------*/
#define MFX_IRQ_PENDING_GPIO    0x01
#define MFX_IRQ_PENDING_IDD     0x02
#define MFX_IRQ_PENDING_ERROR   0x04
#define MFX_IRQ_PENDING_TS_DET  0x08
#define MFX_IRQ_PENDING_TS_NE   0x10
#define MFX_IRQ_PENDING_TS_TH   0x20
#define MFX_IRQ_PENDING_TS_FULL 0x40
#define MFX_IRQ_PENDING_TS_OVF  0x80

//extern __IO FlagStatus MfxItOccurred;
/* Joystick Status */
static TS_StateTypeDef  TS_State;

static void touchpad_init(void);
static bool touchpad_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data);
static void touchpad_get_xy(lv_coord_t * x, lv_coord_t * y);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
void Mfx_Events(void);
/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void touchscreen_init(void)
{

    /*Initialize your button if you have*/
    touchpad_init();

}

static void touchpad_init(void)
{
    if(BSP_TS_Init(BSP_LCD_GetXSize(), BSP_LCD_GetYSize()) != TS_OK)
    {
      log_debug("ts_error\r\n");
    }
    /* Configure TS interrupt */
    BSP_TS_ITConfig();
    __HAL_RCC_I2C1_CLK_ENABLE();

}

/* Will be called by the library to read the touchpad */
static bool touchpad_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data)
{
    static lv_coord_t last_x = 0;
    static lv_coord_t last_y = 0;
    /*Save the pressed coordinates and the state*/
    Mfx_Events();
    BSP_TS_GetState(&TS_State);
    if(TS_State.touchDetected)
    {
      /* Get X and Y position of the touch post calibrated */
      data->point.x = TS_State.touchX[0];
      data->point.y = TS_State.touchY[0];
      last_x  =  data->point.x;
      last_y  =  data->point.y;
      data->state = LV_INDEV_STATE_PR;
    } else {
      data->point.x = last_x;
      data->point.y = last_y;
      data->state = LV_INDEV_STATE_REL;
    }

    /*Return `false` because we are not buffering and no more data to read*/
    return false;
}


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  /* Check if interrupt comes from MFX */
  
  if(GPIO_Pin == TS_INT_PIN)
  {
    HAL_NVIC_DisableIRQ(TS_INT_EXTI_IRQn);
  }

  else
  {
    /* Unexpected case */
  }
}

void Mfx_Events(void)
{

  HAL_NVIC_EnableIRQ(TS_INT_EXTI_IRQn);
}
