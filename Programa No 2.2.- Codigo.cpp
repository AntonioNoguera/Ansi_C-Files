// Programa 2.2 
// Programa que captura un arreglo de n elementos
// para posteriormente imprimirlo e imprimir el promedio
// de los valores que contiene

#include<stdio.h>
#include<string.h>



char testo[500],dest[50];

main(){
	int i,N;
	float sum;
	
	printf("Ingrese la cantidad de elementos que desea ingresar: ");
	scanf("%d",&N);
	printf("\n");
	
	if(N<=0){
		printf("Error: Ingrese una valor mayor a 0.");
	}else{
		int A[N];
		
		for(i=0;i<N;i++){
			printf("Ingrese su valor n%cmero %d: ",163,(i+1));
			scanf("%d",&A[i]);
		}
		
		for(i=0;i<N;i++){
			sum = sum + A[i];
		}
		sum= sum/N;
		
		for(i=0;i<N;i++){
			if(i!=(N-1)){
				sprintf(dest, "%d, ",A[i]);	
			}else{
				sprintf(dest, "%d",A[i]);
			}
			
			strcat(testo,dest);
		}
		
		printf("\nEl promedio de los valores %s es igual a: %f",testo,sum);
	}
	getchar();
}
