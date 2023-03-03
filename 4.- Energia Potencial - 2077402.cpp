//Programa 4
//Elaborar un programa para obtener la energía potencial de un sistema

#include<stdio.h>
#include<conio.h>

float Ep,m,hI,hF,g;

main(){
	printf("Ingrese la masa del cuerpo: ");
	scanf("%f",&m);
	printf("Ingrese la altura inicial: ");
	scanf("%f",&hI);
	printf("Ingrese la altura final: ");
	scanf("%f",&hF);
	printf("Ingrese el valor de la gravedad: ");
	scanf("%f",&g);
	
	Ep=(m*g*hF)-(m*g*hI);
	
	printf("La energ%ca potencial del sistema fue igual a: %f J",161,Ep);
	getche();
}

