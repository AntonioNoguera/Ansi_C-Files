//Programa para calcular cuantas veces cabe un cuadrado en un rectangulo

#include<stdio.h>
#include<conio2.h>

//Variables

int lado, ladoRecA, ladoRecB, vecesA, vecesB, vecesTotales;
//float vecesA,vecesB;

main(){
	//Estilos
	textcolor(0);textbackground(15);
	clrscr();
	//Código
	printf("Ingrese el valor del lado del cuadrado: ");
	scanf("%d",&lado);
	printf("Ingrese el valor del la base del rect%cngulo: ",160);
	scanf("%d",&ladoRecA);
	printf("Ingrese el valor del la altura del rect%cngulo: ",160);
	scanf("%d",&ladoRecB);
	
	if(lado>0 && ladoRecA>0 && ladoRecB>0){
		
		vecesTotales=(((ladoRecA)-(ladoRecA%lado))/lado)*(((ladoRecB)-(ladoRecB%lado))/lado);
		printf("\nEl cuadrado cabe en el rect%cngulo %d veces.",160,vecesTotales);
		
	}else{
		printf("Los valores de los lados no pueden ser negativos.");
	}	
getche();
}
