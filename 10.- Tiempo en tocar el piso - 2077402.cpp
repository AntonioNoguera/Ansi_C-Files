//Programa10
//Elaborar un programa para obtener el tiempo en tocar el piso de un objeto en caída libre (en gravedad terrestre)

#include<stdio.h>
#include<conio.h>
#include<math.h>

float h,t;

main(){
	printf("Ingrese el valor de la altura de donde se dejo caer el piso: ");
	scanf("%f",&h);
	
	t=sqrt((2*h)/9.81);
	
	printf("El objeto tarda en caer: %f s",t);
	getche();
}
