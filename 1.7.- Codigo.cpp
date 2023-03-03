//Programa 1.7
//Programa que imprime unicamente el numero indicado de terminos de la siguiente serie:
//2,4,3,6,5,10,9

#include<stdio.h>
#include<conio2.h>

int i,N,S=2,flag=1;

main(){
	printf("Ingrese la cantidad de n%cmeros que desea de la serie: ",163);
	scanf("%d",&N);
	printf("\n");
	for(i=1;i<=N;i++){
		
		if(i!=N){
			printf("%d, ",S);
		}else{
			printf("%d.",S);
		}
		
		if(flag==1){
			S=S*2;	flag=0;
		}else{
			S=S-1;	flag=1;
		}
	}
	
	getche();
}
