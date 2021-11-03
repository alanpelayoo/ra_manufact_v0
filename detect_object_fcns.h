/*
 * detect_object_fcns.h
 *
 *  Created on: Nov 1, 2021
 *      Author: alahp
 */

#ifndef DETECT_OBJECT_FCNS_H_
#define DETECT_OBJECT_FCNS_H_

#include "bt_fcns.h"

extern const int S0 ;
extern const int S1;
extern const int S2;
extern const int S3;
extern const int sensorSalida;


extern byte sensorpir ;

int detect_pres();

int conf_rojo ();
int conf_verde ();
int conf_azul ();
int evaluar_color();

#endif /* DETECT_OBJECT_FCNS_H_ */
