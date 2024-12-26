/*
 * sensor.c
 *
 *  Created on: Dec 18, 2024
 *      Author: Антон
 */


#include "sensor.h"
static GPIO_TypeDef* port;
static uint32_t pin;
static uint8_t isInit = 0;


sensor(GPIO_TypeDef* gpioPort, uint32_t gpioPin) {
	port = gpioPort;
	pin = gpioPin;
	isInit = 1;

}

int32_t SensorRead(){
	if(isInit == 1){
		return HAL_GPIO_ReadPin(port,pin);
	}else{
		return -1;
	}
}
