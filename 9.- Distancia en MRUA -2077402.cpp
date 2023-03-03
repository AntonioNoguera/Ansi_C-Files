//Programa 9
//Elaborar un programa para obtener la distancia del MRUA

#include<stdio.h>
#include<conio.h>

float vI,a,t,d;

main(){
	printf("Ingrese el valor de la velocidad inicial: ");
	scanf("%f",&vI);
	
	printf("Ingrese el valor de la aceleraci%cn: ",162);
	scanf("%f",&a);
	
	printf("Ingrese el valor del tiempo: ");
	scanf("%f",&t);
	
	d=(vI*t)+((a*t*t)/2);
	
	printf("La distancia recorrida fue de: %f",d);
	getche();	
}
