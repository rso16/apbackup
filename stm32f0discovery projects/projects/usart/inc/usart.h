/******************************************************************************
 * File           : USART driver header file
******************************************************************************/
#ifndef _USART_H_
#define _USART_H_

#include <string.h>
#include "../src/node.h"

#define FALSE 0
#define TRUE 1
#define ENTER 0x0D
#define BUFFERSIZE 100


#include "stdint.h"

/******************************************************************************
  Function prototypes
******************************************************************************/
void USART_init(void);
void USART_putc(char c);
char USART_getc(void);
void USART_putstr(char *str);
void USART_getstr(char *str);
void USART_clearscreen(void);

#endif // _USART_H_
