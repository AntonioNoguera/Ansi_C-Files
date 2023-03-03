// Programa para decidir cul de los dos equipo ganó

#include<stdio.h>
#include<conio2.h>

int GolesA, GolesB;

main(){
	//Estilos
	textcolor(8);textbackground(15);	
	clrscr();
	//Código
	printf("Ingrese los goles del equipo A: ");
	scanf("%f",&GolesA);
	printf("Ingrese los goles del equipo B: ");
	scanf("%f",&GolesB);
	
	printf("\n");
	if(GolesA>GolesB){
		printf("El equipo A fue el ganador.");
	}else if(GolesA<GolesB){
		printf("El equipo B fue el ganador.");
	}else{
		printf("No hubo equipo ganador.");
	}
	getche();
}
