//Programa 2.1
//Programa que captura la cantidad de numeros que el usuario elija, para después
//imprimirlos de forma horizontal separados por comas (primero capturar y después 
//imprime todos)

#include<stdio.h>
#include <string.h>


main(){
	int N,i;
	char testo[500]="",dest[50];
	
	printf("Ingrese la cantidad de varibales que desea ingresar: ");
	scanf("%d",&N);
	printf("\n");
	
	if(N<=0){
		printf("Error: Ingrese una valor mayor a 0.");
	}else{
		int A[N];
		
		for(i=0;i<N;i++){
			printf("Ingrese el valor de la posicion %d: ",(i+1));
			scanf("%d",&A[i]);
		}
		
		for(i=0;i<N;i++){
			if(i!=(N-1)){
				sprintf(dest, "%d, ",A[i]);	
			}else{
				sprintf(dest, "%d",A[i]);
			}
			
			strcat(testo,dest);
		}
		printf("\n[ %s ]",testo);
	}
	getchar();
}
