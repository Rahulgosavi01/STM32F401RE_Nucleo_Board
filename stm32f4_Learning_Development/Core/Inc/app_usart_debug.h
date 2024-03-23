/*
 * usart_debug_app.h
 *
 *  Created on: Mar 23, 2024
 *      Author: Rahul
 */

#ifndef INC_APP_USART_DEBUG_H_
#define INC_APP_USART_DEBUG_H_

#ifdef __GNUC__
  /* With GCC, small printf (option LD Linker->Libraries->Small printf
     set to 'Yes') calls __io_putchar() */
  #define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
  #define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */


#endif /* INC_APP_USART_DEBUG_H_ */
