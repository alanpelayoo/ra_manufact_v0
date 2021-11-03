/*
 * mesf_princ.cpp
 *
 *  Created on: Nov 1, 2021
 *      Author: alahp
 */


#include "mesf_princ.h"



void mefRAinit(void)
{
	ra_State=bt_init;

}


void mefRAupdate(void)
{
	switch(ra_State){

	case bt_init:



		flag = bt_read();

		if (flag==1){
			ra_State =detect_presence;


		}

		break;

	case detect_presence:

		flag_pres = detect_pres();
		if (flag_pres){
			ra_State =detect_color;

		}
		break;

	case detect_color:
		delay(500);

		flag_color = evaluar_color();// retorna uno para rojo y 2 para negra
		Serial.print(flag_color);

		if (flag_color!=0){
			Serial.print(flag_color);
			ra_State =Calibrate_servos;
		}

		break;

	case Calibrate_servos:
		delay(500);

		serv_1.write(90);
		serv_2.write(90);
		serv_3.write(90);
		serv_4.write(100);
		serv_5.write(100);

		ra_State = Pick_object;
		break;

	case Pick_object:
		delay(500);

		Angulo_s1 = mov_servo_inc(Angulo_s1,168, serv_1);
		Angulo_s3 = mov_servo_inc(Angulo_s3,180, serv_3);
		Angulo_s2 = mov_servo_inc(Angulo_s2,130, serv_2);
		Angulo_s5 = mov_servo_inc(Angulo_s5,180, serv_5);
		Angulo_s2 = mov_servo_dec(Angulo_s2,40, serv_2);//40 para el otro
		delay(50);
		Angulo_s4 = mov_servo_dec(Angulo_s4,0, serv_4);
		ra_State = Return_ini;
		break;

	case Return_ini:
		delay(500);
		Angulo_s2 = mov_servo_inc(Angulo_s2,80, serv_2);
		Angulo_s1 = mov_servo_dec(Angulo_s1,80, serv_1);
		delay(50);
		if (flag_color==1){
			ra_State = Deliver_object;
		}
	    if (flag_color==2){
			ra_State = Deliver_object_2;

		}

		break;

	case Deliver_object:
		delay(500);
		Angulo_s2 = mov_servo_dec(Angulo_s2,40, serv_2);
		Angulo_s4 = mov_servo_inc(Angulo_s4,90, serv_4);


		ra_State = Return_90;
		break;
	case Deliver_object_2:

		delay(500);
		Angulo_s1 = mov_servo_dec(Angulo_s1,40, serv_1);
		Angulo_s2 = mov_servo_dec(Angulo_s2,40, serv_2);

		Angulo_s4 = mov_servo_inc(Angulo_s4,90, serv_4);



		ra_State = Return_90;
		break;

	case Return_90:
		delay(500);// 23 ms por cada de grados tarda el MG996R

		Angulo_s1 = mov_servo_dec(Angulo_s1,95, serv_1);
		Angulo_s2 = mov_servo_inc(Angulo_s2,95, serv_2);
		Angulo_s3 = mov_servo_dec(Angulo_s3,95, serv_3);
		Angulo_s4 = mov_servo_inc(Angulo_s4,90, serv_4);

		Angulo_s5 =100;
		serv_5.write(100);


		flag_color=0;
		flag_pres =0;

		ra_State=bt_init;
		break;

	default:
		ra_State=bt_init;
		break;

	}
}
