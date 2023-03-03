//Programa 2.7
#include<stdio.h>
#include<windows.h>
#include<conio2.h>
#include<time.h>

main(){
	int i,N,flag=0,e=0;
	srand(time(NULL));
	do{
		clrscr();
		printf("Ingrese el tama%co del arreglo: ",164);scanf("%d",&N);
		
		if(N>0){
			int A[N],B[N],C[N*2];
			printf("\n");
			for(i=0;i<N;i++){
				printf("Ingrese el valor numero %d: ",i+1);scanf("%d",&A[i]);
			}
		
			int mayor=A[0], menor=A[0];
			
			for(i=0;i<N;i++){
				if(mayor<A[i]){mayor=A[i];}
				if(menor>A[i]){menor=A[i];}
			}
			
			for(i=0;i<N;i++){
				B[i]=rand()%(mayor-menor+1)+menor;
			}
			
			printf("\nValores Introducidos: [ ");
			for(i=0;i<N;i++){
				if(i<N-1){printf("%d, ",A[i]);}else{printf("%d ]\n",A[i]);}
			}
			
			printf("\nEl intervalo de los valores generados fue: [ %d , %d ]\n",mayor,menor);
			
			printf("\nValores Generados: [ ");
			for(i=0;i<N;i++){
				if(i<N-1){printf("%d, ",B[i]);}else{printf("%d ]\n",B[i]);}
			}
			
			for(i=0;i<(N*2);i++){
				if(flag==0){
					C[i]=A[e];flag=1;
				}else{
					C[i]=B[e];flag=0;e++;
				}
			}
			
			printf("\nValores Intercalados: [ ");
			for(i=0;i<N*2;i++){
				if(i<N*2-1){printf("%d, ",C[i]);}else{printf("%d ]\n",C[i]);}
			}
		}else{
			clrscr();
			printf("Ingrese un valor mayor a cero.");
			Sleep(900);
			}
		}while(N<=0);
}
