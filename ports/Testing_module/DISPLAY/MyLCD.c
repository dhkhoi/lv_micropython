#include "stm32l4r9i_discovery_lcd.h"
#include "stm32l4r9i_discovery_psram.h"
#include "log.c"
#define LTDC_ACTIVE_LAYER     LTDC_DEFAULT_ACTIVE_LAYER
static void Display_DemoDescription(void);

void LCD_Init(void)
{
FMC_Bank1_R->BTCR[0] = 0x000030D2;
BSP_PSRAM_Init();
HAL_Init();
log_init();
BSP_LCD_Init();
BSP_LCD_SelectLayer(LTDC_ACTIVE_LAYER);
log_debug("enter\r\n");
}

void LCD_Deinit(void)
{
BSP_LCD_DeInit();
}
void LCD_Refresh(void)
{
HAL_Delay(100);
log_debug("enter the refresh\r\n");

BSP_LCD_Refresh();
log_debug("exit\r\n");

log_debug("exitRED\r\n");
}
static void Display_DemoDescription(void)
{

  /* Set LCD Foreground Layer  */
  //BSP_LCD_SelectLayer(LTDC_ACTIVE_LAYER);

  BSP_LCD_SetFont(&LCD_DEFAULT_FONT);

  /* Clear the LCD */
  BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
  BSP_LCD_Clear(LCD_COLOR_WHITE);

  /* Set the LCD Text Color */
  BSP_LCD_SetTextColor(LCD_COLOR_DARKBLUE);

  /* Display LCD messages */
  BSP_LCD_DisplayStringAt(0, 50, (uint8_t *)"STM32L4R9I BSP", CENTER_MODE);
  BSP_LCD_DisplayStringAt(0, 75, (uint8_t *)"Drivers examples", CENTER_MODE);


}


