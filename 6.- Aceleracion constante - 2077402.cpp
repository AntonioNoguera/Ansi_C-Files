//Programa 6
//Programa para obtener la aceleración de un cuerpo en MRUA

#include<stdio.h>
#include<conio.h>

float vf, vi, t, a;

main(){
	printf("Ingrese la velocidad inicial: ");
	scanf("%f",&vi);
	printf("Ingrese la velocidad final: ");
	scanf("%f",&vf);
	printf("Ingrese el tiempo en el que cambia a dicha velocidad: ");
	scanf("%f",&t);
	
	a=(vf-vi)/t;
	
	printf("La aceleraci%cn del cuerpo fue igual a: %f",162,a);
	getche();
}
