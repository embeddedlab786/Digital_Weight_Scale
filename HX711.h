#ifndef __HX711__H__
#define __HX711__H__

#include <Arduino.h>

#define HX711_SCK 8
#define HX711_DT 7

extern void Init_Hx711();
extern unsigned long HX711_Read(void);
extern unsigned int Get_Weight();
extern void Get_Maopi();

#endif
