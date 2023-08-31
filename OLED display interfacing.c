#include "lpc214x.h"

void I2C_init(void)
{
 PINSEL0 = PINSEL0 | 0x00000050 ;
 I2CCONSET0 =0x40;
 I2C0SCLL =50;
 I2C0SCLH =50;
}

void I2C_start(void)
{
 I2CCONSET0 = 0x20;


}