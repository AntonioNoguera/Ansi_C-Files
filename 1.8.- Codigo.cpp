//Programa que dado un numero imprime su tabla de multiplicar

#include<stdio.h>
#include<conio2.h>

int i,N,r;

main(){
	printf("Ingrese el numero del que desea la tabla de multiplicar: ");
	scanf("%d",&N);
	printf("\n");
	for(i=1;i<11;i++){
		r=i*N;
		printf("%d %c %d = %d \n",N,158,i,r);
	}
	getche();
}
