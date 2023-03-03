//Programa 1.6
//Programa que indica numeros pares o impares

#include<stdio.h>

int N;

main(){
	printf("Ingrese su n%cmero a analizar: ",163);
	scanf("%d",&N);
	
	if(N%2==0){
		printf("El n%cmero %d es PAR.",163,N);
	}else{
		printf("El n%cmero %d es NON.",163,N);
	}
	
}
