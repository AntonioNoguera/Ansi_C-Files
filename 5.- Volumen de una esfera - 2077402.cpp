//Programa 5
//Programa para obtener el volumen de una esfera

#include<stdio.h>
#include<conio.h>

float r,v;

main(){
	printf("Ingrese el radio del c%crculo: ",161);
	scanf("%f",&r);
	
	v=((4*3.1416)*(r*r*r)/3);
	
	printf("El volumen del c%crculo cuyo radio es %f es igual a: %f",161,r,v);
	getche();
}
