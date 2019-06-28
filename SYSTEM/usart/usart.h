#ifndef __USART_H_
#define __USART_H_


#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_usart.h"
#include <stdarg.h>
#include "dht11.h"
#include "usart.h"


#define WAIT_TC while(USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET)
#define Led_On   GPIO_SetBits(GPIOA, GPIO_Pin_15)
#define Led_Off GPIO_ResetBits(GPIOA, GPIO_Pin_15)

void usart_config(void);
void usart_gpio_init(void);
void usart_param_config(void);

void usart_send_string(char *data);
void usart_printf(const char *fmt, ...);

#endif





