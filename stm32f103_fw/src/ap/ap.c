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
  }
}
