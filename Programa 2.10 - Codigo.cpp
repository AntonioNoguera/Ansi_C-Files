//Programa que captura un arreglo e tamaño N, pero imprime los numeros pares que este contiene, ordenados de menor a mayor y luego imprime los none de mayor a menor
#include<stdio.h>

void impresor(char *texto,int arr[], int N){
	int i;
	printf("%s [ ",texto);
	for(i=0;i<N;i++){printf("%d, ",arr[i]);}
	printf("]\n\n");
}

void ordenador(int flag,int arr[],int N){
	int pass,j,i;
	
	for(i = 1; i < N; i++) {
		for(j = 0; j < N - i; j++) {
			if(flag==0){
				if(arr[j] > arr[j + 1]) {
					pass=arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = pass;
	      }
			}else{
				if(arr[j] < arr[j + 1]) {
					pass=arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = pass;
	      }
			}
    }
  }
}

void creador(int arr[],int widthB,int widthC,int size){
	int B[widthB],C[widthC],j=0,k=0,i;
	
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			B[j]=arr[i];j++;
		}else{
			C[k]=arr[i];k++;
		}
	}
	ordenador(0,B,widthB);ordenador(1,C,widthC);
	
	impresor("Arreglo capturado: ",arr,size);
	impresor("Arreglo con los valores pares(de menor a mayor): ",B,widthB);
	impresor("Arreglo con los valores nones(de mayor a menor): ",C,widthC);
}

main(){
	int N,i,j=0,k=0,pares=0,impares=0;
	
	printf("Ingresa la cantidad de valores a capturar: ");scanf("%d",&N);
	int A[N];
	
	if(N<=0){
		printf("Error");
	}else{
		for(i=0;i<N;i++){printf("Ingrese su valor: ");scanf("%d",&A[i]);}
		
		for(i=0;i<N;i++){
			if(A[i]%2==0){pares++;}else{impares++;}
		}
		printf("\n");
		creador(A,pares,impares,N);
	}
}
