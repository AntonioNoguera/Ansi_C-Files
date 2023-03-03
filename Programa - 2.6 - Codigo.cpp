//Programa que genera un n elementos rellenados con valores aleatorios de 1 al 6
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio2.h>

main(){
	srand(time(NULL));
	int N,i,option,M,encont;
	
	printf("Array Size: ");scanf("%d",&N);
	int *vector;
	
	vector = (int*)malloc(N*sizeof(int));
	
	for(i=0;i<N;i++){
		vector[i]=(rand()%6)+1;
	}
	
	const char* opciones[5]={"Redefinir el tamano del arreglo","Rellenar el arreglo(Con valores aleatorios)","Realizar Inferencia","Imprimir el arreglo","Salir"}; 
	do{
		clrscr();
		for(i=0;i<5;i++){printf("%d.- %s \n",i+1,opciones[i]);}
		
		printf("\nSeleccione su opcion: ");scanf("%d",&option);
		
		switch(option){
			case 1:{
				printf("Ingrese el nuevo tamaño: ");scanf("%d",&N);
				vector=(int*)realloc(vector,N*sizeof(int));
				break;
			}
			case 2:{
				for(i=0;i<N;i++){
					vector[i]=(rand()%6)+1;
				}
				printf("Realizado");
				getche();
				break;
			}
			case 3:{
				printf("Ingrese su numero: ");scanf("%d",&M);
				encont=0;
				for(i=0;i<N;i++){if(M==vector[i]){encont++;}}
				printf("El numero se encontro: %d \n",encont);
				printf("El numero se encontro en las posiciones: ");
				for(i=0;i<N;i++){
					if(M==vector[i]){
						printf("%d, ",i+1);
					}
				}
				getche();
				break;
			}
			case 4:{
				for(i=0;i<N;i++){
					printf("%d, ",vector[i]);
				}
				printf("Realizado");
				getche();
				break;
			}
		}
	
	}while(option!=5);
}
