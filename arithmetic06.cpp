//objetivo: obtener el volumen de una esfera
//autor: luis carlos cortez guzman
//fecha: 10/09/2021

#include <stdio.h>

main(){
	//variables
	float radio,volumen,cubo,respuesta1,respuesta2;
	
	//entrada
	printf("introduce el radio ");
	scanf("%f",&radio);
	
	//proceso
	cubo = (radio * radio) * radio;
	respuesta1 = 4 * cubo;
	respuesta2 = respuesta1 * 3.14;
	volumen = respuesta2 / 3;
	
	//salida
	printf("el volumen es %f",volumen);
	
}
