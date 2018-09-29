/*
 * Chassis.h
 *
 *  Created on: Sep 22, 2018
 *      Author: legom
 */

#ifndef CHASSIS_H_
#define CHASSIS_H_
#include "Motor.h"
class Chassis {
private:
	Motor* leftWheels;
	Motor* rightWheels;
public:
	Chassis(int port1, int port2);
	virtual ~Chassis();

	void moveStraight(double speed);
	void pointTurn(double speed);
	void brake();
	void wait(int waitTime);
};

#endif /* CHASSIS_H_ */
