//Programa numero 2.4

#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio2.h>

int inf,sup,pares,nones,primos,N,i;
void validador(int, int);	void non(int[], int);void par(int[], int);void primo(int[], int);

main(){
	int e,divisores;  clrscr();
	printf("Ingrese la cantidad de valores a analizar: ");
	scanf("%d",&N);
	
	if(N<=0){
		printf("Ingrese un valor mayor a 0");
		Sleep(700);
		main();
	}else{
		printf("Ingrese el limite inferior: ");scanf("%d",&inf);
		printf("Ingrese el limite superior: ");scanf("%d",&sup);
		
		validador(inf,sup);
		
		int A[N];
		srand(time(NULL));
		
		for(i=0;i<N;i++){
			divisores=0;
			A[i]=rand()%(sup+1-inf)+inf;
			
			if((A[i]%2)!=0){nones++;}
			if((A[i]%2)==0){pares++;}
			
			for(e=A[i];e>0;e--){ if((A[i]%e)==0){divisores++;} }
			if(divisores==2){primos++;}
		}
		
		printf("\nValores creados(%d): \n[ ",N);
		for(i=0;i<N;i++){
			if(i<(N-1)){
				printf("%d, ",A[i]);
			}else{
				printf("%d ",A[i]);
			}
		}
		printf("]");
		
		non(A, nones);par(A,pares);primo(A, primos);
		getche();
	}
}

void validador(int pseudoInf, int pseudoSup){
	int pass;
	
	if(pseudoInf==pseudoSup){
		printf("Tu limite inferior y superior no pueden ser iguales.");
		Sleep(800);main();
	}else if(pseudoInf>pseudoSup){
		pass = inf;
		inf = pseudoSup;
		sup = pass;
	}
}

void non(int Arr[], int Width){
	int A[Width],u=0;
	
	for(i=0;i<=N;i++){
		if((Arr[i]%2)!=0){A[u]=Arr[i];u++;}
	}
	printf("\n\n\nNumeros Impares(%d):\n[ ",nones);
	for(i=0;i<=(Width-1);i++){
	if(i!=(Width-1)){
			printf("%d, ",A[i]);	
		}else{
			printf("%d",A[i]);	
		}
	}
	printf(" ]");
}

void par(int Arr[], int Width){
	int B[Width],u=0;
	
	for(i=0;i<=N;i++){
		if((Arr[i]%2)==0){B[u]=Arr[i];u++;}
	}
	printf("\n\n\nNumeros Pares(%d):\n[ ",pares);
	for(i=0;i<=(Width-1);i++){
		if(i!=(Width-1)){
			printf("%d, ",B[i]);	
		}else{
			printf("%d",B[i]);	
		}
	}
	printf(" ]");
}

void primo(int Arr[], int Width){
	int C[Width],u=0,divs,e;

	for(i=0;i<=N;i++){
		divs=0;
		
		for(e=Arr[i];e>0;e--){if((Arr[i]%e)==0){divs++;	}}
		
		if(divs==2){C[u]=Arr[i];u++;}
	}
	printf("\n\n\nNumeros Primos(%d):\n[ ",primos);
	for(i=0;i<=(Width-1);i++){
		if(i!=(Width-1)){
			printf("%d, ",C[i]);
		}else{
			printf("%d",C[i]);
		}
	}
	printf(" ]");
}
