#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio2.h>

main(){
	int A[10],i,j,mayor;
	for(i=0;i<10;i++){
		printf("Ingrese su numero: ");
		scanf("%d",&A[i]);	
	}
	
	mayor=A[0];
	for(i=0;i<10;i++){
		if(A[i]>mayor){
			mayor=A[i];
		}
	}
	printf("    ");
	for(i=1;i<=mayor;i++){
		printf("%d",i);
	}
	
	for(i=0;i<10;i++){
		printf("\n %d- ",A[i]);
		for(j=0;j<A[i];j++){
			printf("%c",219);
		}
	}
}
