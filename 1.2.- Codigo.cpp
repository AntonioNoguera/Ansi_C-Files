// Programa 1.2
// Programa que permite al usuario eleguir entre multiplicar y sumar dos numeros

#include<stdio.h>
#include<conio.h>

float valorA, valorB,resultado;

int caracter, i;

main(){
	printf("Ingrese 1 si desea sumar o 2 si desea multiplicar \n\n");
	
	printf("Ingrese su primer valor: ");
	scanf("%f",&valorA);
	printf("Ingrese su segundo valor: ");
	scanf("%f",&valorB);
	
	do{
		printf("Ingrese su valor: ");
		scanf("%d",&caracter);
		if(caracter==1 || caracter==2){
			i=1;
		}
	}while(i!=1);
	
	if(caracter==1){
		resultado=valorA+valorB;
	}else{
		resultado=valorA*valorB;
	}
	
	printf("\n %f",resultado);
}
