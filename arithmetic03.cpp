//objetivo: que obtenga el perimetro de un rectangulo
//autor: luis carlos cortez guzman
//fecha: 10/09/2021

#include <stdio.h>

 main(){
	//variables
	float longitud,ancho,perimetro;
	
	//entrada
	printf("escribe la longitud ");
	scanf("%f",&longitud);
	printf("escribe el ancho ");
	scanf("%f",&ancho);
	
	//proceso
	perimetro = (longitud*2) + (ancho*2);
	
	//salida
	printf("el perimetro es: %f",perimetro);
}
