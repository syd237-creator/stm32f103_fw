/*
 * reset.c
 *
 *  Created on: 2022. 10. 29.
 *      Author: SEO
 */


#include "reset.h"
#include "rtc.h"

static uint32_t reset_count = 0;


bool resetInit(void)
{
  bool ret = true;

  // 만약 Reset 핀이 눌렸다면

  if( RCC->CSR & (1<<26))
  {
    rtcBackupRegWrite(1,rtcBackupRegRead(1) + 1);
    delay(500);
    reset_count = rtcBackupRegRead(1);
  }

  rtcBackupRegWrite(1,0);

  return ret;
}

uint32_t resetGetCount(void)
{
  return reset_count;
}
