//Programa 7
//Elaborar un programa para obtener la densidad de un cuerpo

#include<stdio.h>
#include<conio.h>

float m,v,d;

main(){
	printf("Ingrese la masa del cuerpo: ");
	scanf("%f",&m);
	printf("Ingrese el volumen del cuerpo: ");
	scanf("%f",&v);
	
	d=m/v;
	
	printf("La densidad del cuerpo fue igual a: %f",d);
	getche();	
}
