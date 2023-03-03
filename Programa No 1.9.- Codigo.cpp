//Programa 1.9
//Genera un numero aleatorio del 1 al 6 simulando un dado

#include <stdio.h>
#include <conio2.h>
#include <stdlib.h>
#include <time.h>

int r;

main(){
	srand(time(NULL));
	
	r= ((rand()%6)+1);
	
	printf("~ Programa que imprime un número aleatorio del 1 al 6 ~\n");
	printf("Resultado: %d",r);
	getchar();
}
