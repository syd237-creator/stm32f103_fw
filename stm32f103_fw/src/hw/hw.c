/*
 * hw.c
 *
 *  Created on: Sep 27, 2022
 *      Author: SEO
 */


#include "hw.h"

void hwInit(void)
{
  bspInit();
  rtcInit();

  resetInit();
  ledInit();
  usbInit();
  uartInit();
}
