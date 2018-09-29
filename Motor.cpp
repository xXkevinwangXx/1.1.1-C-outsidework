/*
 * Motor.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: legom
 */

#include "Motor.h"

Motor::Motor(int _port) {
	Mport = _port;
	isReversed = false;
	// TODO Auto-generated constructor stub

}

Motor::~Motor() {
	// TODO Auto-generated destructor stub
}

void Motor::reverse(){
	isReversed = !isReversed;
}

void Motor::setSpeed(double speed){
	if(isReversed){
		speed* = -1;
	}
	std::cout << speed << std:endl;
}
