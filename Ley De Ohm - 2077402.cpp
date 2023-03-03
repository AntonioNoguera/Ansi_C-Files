//Programa de que soluciona la ley de OHM

#include<stdio.h>
#include<conio2.h>

float I, R, V;

main(){
	//Estilos
	textcolor(15);textbackground(CYAN);
	clrscr();
	//Código
	printf("Ingrese el valor de la corriente: ");
	scanf("%f",&I);
	printf("Ingrese el valor de la resistencia: ");
	scanf("%f",&R);
	
	V=I*R;
	
	printf("\nEl valor del volaje fue igual a: %f volts.",V);
	
	getche();
}
