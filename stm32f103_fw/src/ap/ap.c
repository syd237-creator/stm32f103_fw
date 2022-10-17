/*
 * ap.c
 *
 *  Created on: Sep 27, 2022
 *      Author: SEO
 */


#include "ap.h"

extern uint8_t CDC_Transmit_FS(uint8_t* Buf, uint16_t Len);

void apInit(void)
{

}

void apMain(void)
{
  while(1)
  {
    ledToggle(_DEF_LED1);
    delay(1000);

    CDC_Transmit_FS("test\n", 6);
  }
}
