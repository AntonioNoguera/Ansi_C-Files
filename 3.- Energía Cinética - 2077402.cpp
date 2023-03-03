// Programa 3
// Elaborar un programa para obtener la energía cinética de un sistema

#include<stdio.h>
#include<conio.h>

float m,vI,vF,Ec;

main(){
	printf("Ingrese la masa del cuerpo: ");
	scanf("%f",&m);
	printf("Ingrese la velocidad inicial: ");
	scanf("%f",&vI);
	printf("Ingrese la velocidad final: ");
	scanf("%f",&vF);
	
	Ec=((m*(vF*vF))/2)-((m*(vI*vI))/2);
	
	printf("La energ%ca cin%ctica del cuerpo es igual a: %f",161,130,Ec);
	getche();
}
