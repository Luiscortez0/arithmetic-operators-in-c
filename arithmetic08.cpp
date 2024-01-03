//objetivo: que responde una ecuacion de segundo grado
//autor: luis carlos cortez guzman
//fecha: 10/09/2021

#include <stdio.h>
#include <math.h>

 main(){
	//variables
	float a,b,c,D;
	
	//entrada
	printf("\nEcuaciones de segundo grado \n\n");
	printf("  2\n");
	printf("ax + bx + c = 0\n\n");
	printf("introduce el valor de a: ");
	scanf("%f",&a);
	printf("introduce el valor de b: ");
	scanf("%f",&b);
	printf("introduce el valor de c: ");
	scanf("%f",&c);
	
	//proceso
	D=b*b-(4*a*c);
	
	if (D==0)
	printf("sol.: %.2f\n", -b/(2*a));
	else if (D>0) {
		printf("sol. 1: %.2f\n", (-b+sqrt(D))/(2*a));
		printf("sol. 2: %.2f\n", (-b-sqrt(D))/(2*a));
	}
	else { /* D<0 */
	    printf("sol. 1: %.2f+%.2f i\n",-b/(2*a),(sqrt(-D))/(2*a));
    	printf("sol. 2: %.2f-%.2f i\n",-b/(2*a),(sqrt(-D))/(2*a));
	}
}
