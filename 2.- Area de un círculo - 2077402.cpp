// Programa 2
// Elaborar un programa para obtener el área de un círculo

#include<stdio.h>
#include<conio.h>

float r,a;

main(){
	
	printf("Ingrese el radio del c%crculo: ",161);
	scanf("%f",&r);
	a=3.1416*(r*r);
	printf("El %crea de un circulo cuyo radio es %f fue igual a: %f ",160, r, a);
	getche();
}
