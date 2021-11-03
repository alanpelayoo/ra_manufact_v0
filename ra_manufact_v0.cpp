// Do not remove the include below
#include "ra_manufact_v0.h"


/* Constantes*/
Servo serv_1;
Servo serv_2;
Servo serv_3;
Servo serv_4;
Servo serv_5;

const int S0 =2;
const int S1=3;
const int S2=4;
const int S3=12;
const int sensorSalida=13;


byte sensorpir = A0;


int piezas_1=0;
int piezas_2=0;
int piezas_3=0;

int flag=0;
int flag_pres=0;
int flag_color=0;
SoftwareSerial BT(5,6);

/*Valores iniciales de angulos*/

int Angulo_s1=80;
int Angulo_s2=80;
int Angulo_s3=80;
int Angulo_s4=90;
int Angulo_s5=90;

raMEF_t ra_State;

void setup()
{
	BT.begin(9600);       // Inicializamos el puerto serie BT (Para Modo AT 2)
	Serial.begin(9600);
	argsFcnsetup argumentos_x = {serv_1, serv_2, serv_3, serv_4, serv_5, S0, S1, S2, S3, sensorSalida, sensorpir};
	ports_setup(argumentos_x);

}


void loop()
{
	mefRAinit();

	while(1){
		mefRAupdate();


	}

}


