/*
 * usart_debug_app.c
 *
 *  Created on: Mar 23, 2024
 *      Author: Rahul
 */

#include "app_main.h"

PUTCHAR_PROTOTYPE
{
  /* Place your implementation of fputc here */
  /* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
  HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, HAL_MAX_DELAY);

  return ch;
}


