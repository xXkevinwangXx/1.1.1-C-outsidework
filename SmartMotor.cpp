/*
 * SmartMotor.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: legom
 */

#include "SmartMotor.h"

SmartMotor::SmartMotor(int tempPort) : Motor(tempPort) {
	// TODO Auto-generated constructor stub
	lastSpeed = 0;
}


SmartMotor::~SmartMotor() {
	// TODO Auto-generated destructor stub
}

double SmartMotor:: getLastSpeed(){
	return lastSpeed;
}

void SmartMotor::Motor::setSpeed(double speed){
	Motor::setSpeed(speed);
	lastSpeed = speed;
}
