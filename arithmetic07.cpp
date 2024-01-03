//objetivo: que combierta centigrados a fahrenheit 
//autor: luis carlos cortez guzman
//fecha: 10/09/2021

#include <stdio.h>

 main(){
	//variables
    float centigrados,fahrenheit;
    
    //entrada
    printf("ingresa los grados centigrados ");
    scanf("%f",&centigrados);
    
    //proceso
    fahrenheit = (centigrados*1.8)+32;
    
    //salida
    printf("en grados fahrenheit son %f",fahrenheit);
	}
