//Programa 2.5
// Genera un arreglo de 10 elementos con valores aleatorios del 1 al 10
//permite al usuario jugar 3 veces
//Tres oportunidades? por valor, 
//permite elegir el numero del elemento, y tratar de adivinar el valor del elemeneto, si acierta mostrar dicho valor
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio2.h>

int intentos=3, i,r,A[10],valores[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

void Juego();void verificador(int posicion, int valor);

main(){
		srand(time(NULL));
		for(i=0;i<10;i++){
			A[i]=(rand()%10+1);
		}
	Juego();
}

void Juego (){
	int posicion=0,valor=0;
	if(intentos!=0){
		clrscr();
		printf("Intentos Disponibles: %d\n",intentos);
		
		for(i=0;i<10;i++){
			printf("%d, ",A[i]);
		}
		printf("\n");
		printf("[ ");
		for(i=0;i<10;i++){
			if(valores[i]==-1){
				printf("%c",158);
			}else{
				printf("%d",valores[i]);
			}
			if(i!=9){
				printf(", ");
			}
		}
		printf(" ]");
		printf("\n");
		
		printf("\nAdivina el valor:");
		printf("\nEscoge la posicion a adivinar: ");
		scanf("%d",&posicion);
		
		if(posicion<1 || posicion>10){
				printf("Ingrese un valor del 1 al 10.");Sleep(800);Juego();
			}else{
				
				if(valores[posicion-1]!=-1){
					printf("Esa posicion ya ha sido resuelta.");Sleep(800);Juego();
				}else{
					
					printf("\nIngresa tu valor: ");
					scanf("%d",&valor);
					
					if(valor<1 || valor>10){
						printf("Ingrese un valor del 1 al 10.");Sleep(800);Juego();
					}else{
						verificador(posicion, valor);
					}
				}
		}
	}else{
		clrscr();
		printf("Juego Terminado.");
	}
}

void verificador(int posicion, int valor){
	
	if(A[posicion-1]==valor){
		printf("GANASTEEEEEE");
		valores[posicion-1]=valor;
	}else{
		printf("Perdiste");
		intentos--;
	}
	Sleep(1000);
	Juego();
}
