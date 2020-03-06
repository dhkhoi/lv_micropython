#include "stm32l4r9i_discovery.h"

void LED_init(int led)
{

if (led == 1)
{
BSP_LED_Init(LED1);
}
else
{
BSP_LED_Init(LED2);
}
}

void LED_on(int time)
{
BSP_LED_On(LED2);
HAL_Delay(time*1000);
BSP_LED_Off(LED2);
}





