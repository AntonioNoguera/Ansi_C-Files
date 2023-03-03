//Programa que calcula la formula general

#include<stdio.h>
#include<conio.h>
#include<conio2.h>
#include<math.h>

float A,B,C,DISCR,X1,X2;

main(){
	//Estilos
	textcolor(WHITE); textbackground(CYAN);
	clrscr();
	
	//Código
	printf("Ingrese el valor del coeficiente de x%c: ",253);
	scanf("%f",&A);
	if(A<0){
		printf("Las ra%cces no se pueden calcular.",161);
	}else{
		printf("Infrese el valor del coeficiente de x: ");
		scanf("%f",&B);
		printf("Ingrese el valor del coeficiente de a: ");
		scanf("%f",&C);
		
		DISCR=(B*B)-(4*A*C);
		
		if(DISCR<0){
			printf("Las ra%cces no pertenecen en los n%cmeros reales.",161,163);
		}else{
			X1=((-1*B)+sqrt(DISCR))/(2*A);
			X2=((-1*B)-sqrt(DISCR))/(2*A);
			
			printf("\nEl valor de X+ es igual a: %f. \n\n",X1);
			printf("El valor de X- es igual a: %f. ",X2);
		}
		
	}
	getche();
}
