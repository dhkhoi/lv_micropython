#include "stm32l4r9i_discovery.h"
#include "stm32l4r9i_discovery_lcd.h"
#include "stm32l4r9i_discovery_psram.h"

#include "lv_conf.h"
#include "lvgl/lvgl.h"
#include "lvgl/src/lv_hal/lv_hal.h"

#include "CopyBuffer.c"
#include "../DISPLAY/log.h"

extern LTDC_HandleTypeDef hltdc_discovery;
extern DSI_HandleTypeDef hdsi_discovery;

static void my_flush_cb(lv_disp_drv_t *drv, const lv_area_t *area, lv_color_t *color_p);
static uint32_t *my_fb = (uint32_t*)(0x30000000UL); 	//GFXMMU_VIRTUALBUFFER0_BASE;

void LCD_init(void) // PSRAM, Display Initialization
{
	HAL_Init();

	FMC_Bank1_R->BTCR[0] = 0x000030D2;	
	BSP_PSRAM_Init();				//Init PSRAM

	BSP_LCD_Init();					//Init Display
	BSP_LCD_SelectLayer(0);
	BSP_LCD_SetBackColor(LCD_COLOR_DARKGRAY);	//
	BSP_LCD_Clear(LCD_COLOR_DARKGRAY );		// Clear screen
	BSP_LCD_Refresh();				//Refresh display memory, set tearing on

}

void LCD_refresh(void)
{
	BSP_LCD_Refresh();						
}

void LCD_deinit(void)
{
	BSP_LCD_DeInit();				//Deinit Display
}

void my_flush_cb(lv_disp_drv_t *drv, const lv_area_t *area, lv_color_t *color_p)	//Flush the data from lvgl buffer into virtual buffer
{
	//log_debug("enter CopyBuffer\r\n");
	CopyBuffer((uint32_t*)color_p, my_fb, area->x1, area->y1, lv_area_get_width(area), lv_area_get_height(area));
	//log_debug("exit CopyBuffer\r\n");
	BSP_LCD_Refresh();
	lv_disp_flush_ready(drv);
	//log_debug("exit FlushReady\r\n");
}


