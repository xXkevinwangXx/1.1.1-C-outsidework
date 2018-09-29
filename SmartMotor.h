/*
 * SmartMotor.h
 *
 *  Created on: Sep 22, 2018
 *      Author: legom
 */

#ifndef SMARTMOTOR_H_
#define SMARTMOTOR_H_
#include "Motor.h"

class SmartMotor : public Motor{
public:
	SmartMotor(int tempPort);
	virtual ~SmartMotor();
	double getLastSpeed();
	void setSpeed(ddouble speed);

private:
	double lastSpeed;
};

#endif /* SMARTMOTOR_H_ */
