//Valor de enmedio

#include<stdio.h>
#include<conio2.h>

int A,B,C;

main(){
	
	printf("Ingrese el primer valor num%crico: ",130);
	scanf("%d",&A);
	printf("Ingrese el segundo valor num%crico: ",130);
	scanf("%d",&B);
	printf("Ingrese el tercer valor num%crico: ",130);
	scanf("%d",&C);
	printf("\n");
	if(A>B){
		if(A>C){
			if(B>C){
				//B
				printf("%d",B);
			}else{
				//C
				printf("%d",C);
			}
		}else{
			//A
			printf("%d",A);
		}
	}else{
		if(B>C){
			if(A>C){
				//A
				printf("%d",A);
			}else{
				//C
				printf("%d",C);
			}
		}else{
			//B
			printf("%d",B);
		}
	}
}
