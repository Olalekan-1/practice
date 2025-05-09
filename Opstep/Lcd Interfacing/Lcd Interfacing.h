#include <16F84A.h>
#include <string.h>
#FUSES XT,NOWDT,PUT,PROTECT
#use delay(crystal=4000000)

#define LCD_DATA_PORT getenv("SFR:PORTb")
#define LCD_ENABLE_PIN  PIN_b3                                    ////
#define LCD_RS_PIN      PIN_b1                                    ////
#define LCD_RW_PIN      PIN_b2                                    ////
#define LCD_DATA4       PIN_b4                                    ////
#define LCD_DATA5       PIN_b5                                    ////
#define LCD_DATA6       PIN_b6                                    ////
#define LCD_DATA7       PIN_b7                                    ////
#include <lcd.c>

