//Programa 8
//Programa para obtener la fuerza de un sistema de masa

#include<stdio.h>
#include<conio.h>

float m,a,f;

main(){
	printf("Ingrese la masa del cuerpo: ");
	scanf("%f",&m);
	printf("Ingrese la aceleraci%cn del cuerpo: ",162);
	scanf("%f",&a);
	
	f=m*a;
	
	printf("La fuerza del sistema es igual a: %f",f);
	getche();
}
