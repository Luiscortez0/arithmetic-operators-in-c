//objetivo: que calcule el area de un trapecio
//autor: luis carlos cortez guzman
//fecha: 10/09/2021

#include <stdio.h>

 main(){
	//variables
	float area,mayor,menor,altura,bases;
	
	//entrada
	printf("la base mayor mide ");
	scanf("%f",&mayor);
	printf("la base menor mide ");
	scanf("%f",&menor);
	printf("la altura mide ");
	scanf("%f",&altura);
	
	//proceso
	bases = mayor + menor;
	area = (bases*altura) /2;
		
	//salida
	printf("el area es %f",area);
}
