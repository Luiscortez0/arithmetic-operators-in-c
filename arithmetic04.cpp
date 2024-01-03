//objetivo: que calcule el area de un triangulo
//autor: luis carlos cortez guzman
//fecha: 10/09/2021

#include <stdio.h>

 main(){
	//variables
	float base,altura,area;
	
	//entrada
	printf("ingresa la base ");
	scanf("%f",&base);
	printf("ingresa la altura ");
	scanf("%f",&altura);
	
	//proceso
	area = (base*altura) /2;
	
	//salida
	printf("el area es: %f",area);
	}
