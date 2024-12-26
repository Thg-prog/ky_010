/*
 * sensor.h
 *
 *  Created on: Dec 18, 2024
 *      Author: Антон
 */

#ifndef SENSOR_H_
#define SENSOR_H_

#include "stm32f4xx_hal.h"

extern void sensor(GPIO_TypeDef* gpioPort, uint32_t gpioPin);
extern int32_t SensorRead();




#endif /* SENSOR_H_ */
