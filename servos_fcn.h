/*
 * servos_fcn.h
 *
 *  Created on: Nov 1, 2021
 *      Author: alahp
 */

#ifndef SERVOS_FCN_H_
#define SERVOS_FCN_H_

#include<Servo.h>
#include "Arduino.h"

extern int angulo_i;
extern int angulo_f;
extern Servo servo_mov;

int mov_servo_inc(int angulo_i,int angulo_f, Servo servo_mov);
int mov_servo_dec(int angulo_i,int angulo_f, Servo servo_mov);



#endif /* SERVOS_FCN_H_ */
