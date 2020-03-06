#ifndef __LOG_H
#define __LOG_H
#include <stdio.h>

#define log_debug(fmt, ...) \
        printf("[DEBUG]\t%s\t%d\t"fmt, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define log_error(fmt, ...) \
        printf("[ERROR]\t%s\t%d\t"fmt, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define log_warn(fmt, ...) \
        printf("[WARN]\t%s\t%d\t"fmt, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define log_info(fmt, ...) \
       printf("[INFO]\t%s\t%d\t"fmt, __FUNCTION__, __LINE__, ##__VA_ARGS__)


// Definition for USARTx clock resources /
#define USARTx                           USART3
#define USARTx_CLK_ENABLE()              __USART3_CLK_ENABLE()
#define USARTx_RX_GPIO_CLK_ENABLE()      __GPIOB_CLK_ENABLE()
#define USARTx_TX_GPIO_CLK_ENABLE()      __GPIOB_CLK_ENABLE()
#define DEBUG
#define USARTx_FORCE_RESET()             __USART3_FORCE_RESET()
#define USARTx_RELEASE_RESET()           __USART3_RELEASE_RESET()

// Definition for USARTx Pins /
#define USARTx_TX_PIN                    GPIO_PIN_10
#define USARTx_TX_GPIO_PORT              GPIOB
#define USARTx_TX_AF                     GPIO_AF7_USART3
#define USARTx_RX_PIN                    GPIO_PIN_11
#define USARTx_RX_GPIO_PORT              GPIOB
#define USARTx_RX_AF                     GPIO_AF7_USART3

// Definition for USARTx's NVIC /
#define USARTx_IRQn                      USART3_IRQn
#define USARTx_IRQHandler                USART3_IRQHandler

#define USART3_RTS_Pin GPIO_PIN_15
#define USART3_RTS_GPIO_Port GPIOA

void log_init(void);


#endif // __LOG_H /
