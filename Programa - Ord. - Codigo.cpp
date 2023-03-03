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
  int x;
  printf("%s:",texto);
  for(x = 0; x < n; x++) {
    printf(" %d",array[x]);
  }
  printf("\n");
}

int main() {
	srand(time(NULL));
	
  int N,bot,top,i;
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
	
	Impresion("Antes de Ordenar: ",vector,N);
  PorInsercion(vector,N);
  Impresion("Antes de Ordenar: ",vector,N);

  return 1;
}
