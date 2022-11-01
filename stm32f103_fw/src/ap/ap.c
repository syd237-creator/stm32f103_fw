/*
 * ap.c
 *
 *  Created on: Sep 27, 2022
 *      Author: SEO
 */


#include "ap.h"



void apInit(void)
{
  uartOpen(_DEF_UART1, 57600);
  uartOpen(_DEF_UART2, 57600);
}

void apMain(void)
{

  uint32_t pre_time;

  while(1)
  {
    if (miliis() - pre_time >= 500)
    {
      pre_time = miliis();
      ledToggle(_DEF_LED1);
    }

    if(uartAvailable(_DEF_UART1) > 0)
    {
      uint8_t rx_data;

      rx_data = uartRead(_DEF_UART1);
      uartPrintf(_DEF_UART1,"USB Rx %c %X\n", rx_data, rx_data);
    }

    if(uartAvailable(_DEF_UART2) > 0)
    {
      uint8_t rx_data;

      rx_data = uartRead(_DEF_UART2);
      uartPrintf(_DEF_UART2,"Uart Rx %c %X\n", rx_data, rx_data);
    }
  }
}
