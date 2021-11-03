/*
 * servos_fcn.cpp
 *
 *  Created on: Nov 1, 2021
 *      Author: alahp
 */

#include "servos_fcn.h"

int mov_servo_inc(int angulo_i,int angulo_f, Servo servo_mov){
	for(angulo_i; angulo_i<angulo_f+1; angulo_i+=1)    // Decrementar de 1 en 1 el angulo que va de 180° hasta 0°
	  {
		servo_mov.write(angulo_i);

		delay(10);                              // Esperar 15 ms para que el servo alcance la posicion
	  }
	return angulo_i;
}

int mov_servo_dec(int angulo_i,int angulo_f, Servo servo_mov){
	for(angulo_i; angulo_i>=angulo_f; angulo_i-=1)    // Decrementar de 1 en 1 el angulo que va de 180° hasta 0°
	  {
		servo_mov.write(angulo_i);

		delay(10);                              // Esperar 15 ms para que el servo alcance la posicion
	  }
	return angulo_i;
}

