//Noguera Guzman Michael Antonio
//Programa que permite al usuario general la cantidad de numeros
//aleatorios que desee, indicando el rango en el cual se generaran, valor minimo y valor maximo
//imprimirlos al final de forma horizontal separados por comas

#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<time.h>

int limInf,limSup,N;

void CreacionAleatoria(int limInf,int limSup);

	main(){
		clrscr();
		int min,max,pass;
		
		printf("Ingrese la cantidad de valores aleatorios que desea: "); scanf("%d",&N);
		
		printf("Ahora ingrese su valor minimo: "); scanf("%d",&min);
		
		printf("Ahora ingrese su valor maximo: "); scanf("%d",&max);
		
		if(min==max){
			
			printf("\nLos limites no pueden ser iguales.");
			Sleep(700);
			main();
			
		}else if(min>max){
			
			pass=min;
			min=max;
			max=pass;
			
			CreacionAleatoria(min,max);
		}else{
			CreacionAleatoria(min,max);
		}
		
	}
	
	void CreacionAleatoria(int limInf,int limSup){
		int r,i;
		
		srand(time(NULL));	
		printf("\n%c",91);
		
		for(i=0;i<N;i++){
			
			r=(rand()%((limSup+1)-limInf)+limInf);
			
			if(i!=(N-1)){
				printf(" %d ,",r);
			}else{
				printf(" %d ",r);
			}
		}
		printf("%c",93);
	}
