//objetivo: que imprima la sumatoria de dos numeros leidos
//autor: luis carlos cortez guzman
//fecha: 10/09/2021

#include <stdio.h>

main(){
	//variables
	float valor1,valor2,resultado;
	
	//entrada
	printf("introduce el primer valor ");
	scanf("%f",&valor1);
	printf("introduce el segundo valor ");
	scanf("%f",&valor2);
	
	//proceso
	resultado = valor1 + valor2;
	
	//salida
	printf("suma = %f",resultado);
}
