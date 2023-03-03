#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio2.h>

void PorInsercion (int a[],int n){
	int i, j,aux;
	for (i = 1; i < n; i++){
		j = i;
		aux = a[i];
		
		while (j > 0 && aux < a[j-1]){
				a[j] = a[j-1];
				j--;
			}
			a[j] = aux;
		}
}

void Impresion(char *texto,int array[], int n) {
  int i;
  printf("%s:",texto);
  for(i = 0; i < n; i++) {
    printf(" %d",array[i]);
  }
  printf("\n");
}

int main() {
	srand(time(NULL));
	
  int N,bot,top,i,sum=0,med=0,posi;
  do{
  	clrscr();
  	printf("Ingrese el tama%co de array deseado: ",164);
  	scanf("%d",&N);
  	if(N<=0){
  	}else{
		 	do{
		 		clrscr();
			  printf("Ingrese su limite inferior: ");scanf("%d",&bot);
			  printf("Ingrese su limite superior: ");scanf("%d",&top);
			}while(bot>top);
		}
	}while(N<=0);
	int vector[N];
	
	for(i=0;i<N;i++){
		vector[i]=rand()%(top-bot+1)+bot;
	}
	
	Impresion("Vector desordenado: ",vector,N);
  PorInsercion(vector,N);
  Impresion("Vector ordenado: ",vector,N);
	
  if(N%2==0){
  	for(i=0;i<2;i++){
			sum=sum+vector[(N/2)-i];
		}
		med=sum/2;
		posi=(N/2);
  	printf("\nEl valor de la mediana es igual a: %d",med);
  }else{
  	med=vector[(N-1)/2];
  	posi=(N-1)/2;
  	printf("\nEl valor de la mediana es igual a: %d",med);
  }
  
  //Pares
  printf("\n\nValores pares: ");
	for(i=0;i<posi;i++){
  	if(vector[i]%2==0){
  		printf("%d, ",vector[i]);
  	}
  }
  //Impares
  printf("\n\nValores impares: ");
  for(i=posi+1;i<N;i++){
  	if(vector[i]%2!=0){
  		printf("%d, ",vector[i]);
  	}
  }
}
