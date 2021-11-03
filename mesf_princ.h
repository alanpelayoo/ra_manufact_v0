/*
 * mesf_princ.h
 *
 *  Created on: Nov 1, 2021
 *      Author: alahp
 */


#include "detect_object_fcns.h"

typedef enum{
	bt_init, // estado 0
	detect_presence,//estado 1
	detect_color, // estado 2
	Calibrate_servos, // estado 3
	Pick_object,// estado 4
	Return_ini,// estado 5
	Deliver_object, // estado 6
	Deliver_object_2,// estado 6
	Return_90,// estado 7

}raMEF_t;

extern raMEF_t ra_State;

extern Servo serv_1;
extern Servo serv_2;
extern Servo serv_3;
extern Servo serv_4;
extern Servo serv_5;

extern int flag;
extern int flag_pres;
extern int flag_color;


extern int Angulo_s1;
extern int Angulo_s2;
extern int Angulo_s3;
extern int Angulo_s4;
extern int Angulo_s5;

void mefRAinit(void);
void mefRAupdate(void);


