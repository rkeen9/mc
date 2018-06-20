/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "I2C.h"
			

int main(void)
{
		//i2c testing begin
		uint8_t message[2];
		uint16_t buff = 5;
		message[0] = 0xE3;
		message[1] = 0xE0;
		I2C_setup();
		I2C_write(0x40, 2, message);
		I2C_read(0x40, 2, (uint8_t*)&buff);
		for(;;);
	//i2c testing end
}
