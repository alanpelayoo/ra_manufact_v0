/*
 * bt_fcns.cpp
 *
 *  Created on: Nov 1, 2021
 *      Author: alahp
 */

#include "bt_fcns.h"

int bt_read(void){

	int flag_2=0;
	String flag_1 = "";
	int n;
	n = BT.available();

	if(n>0)    // Si llega un dato por el puerto BT se envía al monitor serial
	  {

		flag_1 = BT.readString();

		if (flag_1=="1"){
				flag_2=1;

				return flag_2;

			}


		}
	return 0;

}


