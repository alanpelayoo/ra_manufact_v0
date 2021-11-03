/*
 * detect_object_fcns.cpp
 *
 *  Created on: Nov 1, 2021
 *      Author: alahp
 */

#include "detect_object_fcns.h"


int conf_rojo ()
  {

  int Rojo_Frec =0;
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  delay(100);
  Rojo_Frec= pulseIn(sensorSalida, LOW);

  delay(100);
  return Rojo_Frec;

  }

// Configura el filtor VERDE para tomar lectura
int conf_verde ()
  {
  int Verde_Frec;
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  delay(100);
  Verde_Frec = pulseIn(sensorSalida, LOW);

  delay(100);
  return Verde_Frec;

  }

// Configura el filtor AZUL para tomar lectura
int conf_azul ()
  {
  int Azul_Frec;
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  delay(100);
  Azul_Frec = pulseIn(sensorSalida, LOW);

  delay(100);
  return Azul_Frec;
  }

int evaluar_color (void)
{

  int color =0;
  int Azul_Frec =0;
  int Verde_Frec =0;
  int Rojo_Frec =0;

  Azul_Frec = conf_azul();
  Rojo_Frec= conf_rojo();
  Verde_Frec= conf_verde();

  if (Rojo_Frec > 15 && Verde_Frec < 33 && Azul_Frec < 33){//rojo
    color =1;
    BT.println("R");//Manda cuenta al bt para contar pieza roja
  }

  if (Rojo_Frec > 21 && Verde_Frec >31  && Azul_Frec > 30){//negro
    color=2;
    BT.println("N");//Manda cuenta al bt para contar pieza negra
  }

 delay(200);
 return color;

}

int detect_pres(){
	if (digitalRead(sensorpir)==HIGH){
		return 1;
	}

	return 0;
}

