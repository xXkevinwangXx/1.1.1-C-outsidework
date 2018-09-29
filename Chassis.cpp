/*
 * Chassis.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: legom
 */
#include <iostream>
#include "Chassis.h"

Chassis::Chassis(int port1, int port2) : leftWheels(new Motor(port1)), rightWheels(new Motor(port2)){
	rightWheels -> reverse();
	// TODO Auto-generated constructor stub

}

Chassis::~Chassis() {
	// TODO Auto-generated destructor stub
}

void Chassis::moveStraight(double speed){
	leftWheels -> setSpeed(speed);
	rightWheels -> setSpeed(speed);
}

void Chassis::pointTurn(double speed){
	leftWheels -> setSpeed(0);
	rightWheels -> setSpeed(0);
}

void Chassis::brake(){
	leftWheels-> setSpeed(0);
	rightWheels->setSpeed(0);
}

void Chassis::wait(int delayTime){
	std::cout << "waiting for " << delayTime << " second" << std::endl;
}
