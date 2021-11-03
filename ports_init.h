/*
 * ports_init.h
 *
 *  Created on: Nov 2, 2021
 *      Author: alahp
 */

#ifndef PORTS_INIT_H_
#define PORTS_INIT_H_

#include "mesf_princ.h"

typedef struct{
	Servo serv_fcn1;
	Servo serv_fcn2;
	Servo serv_fcn3;
	Servo serv_fcn4;
	Servo serv_fcn5;
	const int Sx0;
	const int Sx1;
	const int Sx2;
	const int Sx3;
	const int sensorSalida_x;
	byte  sensorpir_x;

}argsFcnsetup;

bool ports_setup(argsFcnsetup args);



#endif /* PORTS_INIT_H_ */
