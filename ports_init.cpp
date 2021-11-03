/*
 * ports_init.cpp
 *
 *  Created on: Nov 2, 2021
 *      Author: alahp
 */
#include "ports_init.h"

bool ports_setup(argsFcnsetup args)
{
	(args.serv_fcn1).attach(8);
	(args.serv_fcn2).attach(9);
	(args.serv_fcn3).attach(10);
	(args.serv_fcn4).attach(11);
	(args.serv_fcn5).attach(7);

	pinMode(args.sensorpir_x ,INPUT);
	pinMode(args.Sx0 , OUTPUT);
	pinMode(args.Sx1, OUTPUT);
	pinMode(args.Sx2, OUTPUT);
	pinMode(args.Sx3, OUTPUT);
	pinMode(args.sensorSalida_x , INPUT);

	// Configura la escala de Frecuencia en 20%
	digitalWrite(args.Sx0 ,HIGH);
	digitalWrite(args.Sx1 ,LOW);


}


