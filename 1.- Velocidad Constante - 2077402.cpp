//Programa 1
//Programa para calcular la velocidad de constante de un cuerpo

#include<stdio.h>
#include<conio2.h>

float d,t,v;

main(){
	printf("Indique la distancia: ");
	scanf("%f",&d);
	printf("Indique la tiempo: ");
	scanf("%f",&t);
	v=d/t;
	printf("La velocidad es %f m/s",v);
	getche();
}
