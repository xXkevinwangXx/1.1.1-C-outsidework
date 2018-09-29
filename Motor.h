/*
 * Motor.h
 *
 *  Created on: Sep 22, 2018
 *      Author: legom
 */

#ifndef MOTOR_H_
#define MOTOR_H_

class Motor {

public:
	Motor(int _port);
	virtual ~Motor();
	int Mport;
	bool isReversed;
};
void setSpeed(double speed);

void reverse(bool isReversed);

#endif /* MOTOR_H_ */
