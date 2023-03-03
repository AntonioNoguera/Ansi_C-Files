//Programa 2.12

#include<stdio.h>
#include<conio2.h>


main(){
	int years,i,j,k,opcion,buscado,flag,b;
	
	printf("Ingrese la cantidad de a%cos: ",164);
	scanf("%d",&years);
	printf("\n");
	
	if(years>0){
		int arr[years][4];
		for(i=0;i<years;i++){
			
			printf("Ingrese el a%co de la posicion %d: ",164,i+1);
			scanf("%d",&arr[i][0]);
			printf("\n");
			
			for(j=1;j<4;j++){
				printf("Ingrese el valor del %d trimestre: ",j);
				scanf("%d",&arr[i][j]);
			}
			printf("\n\n");
			}
			
			const char* opciones[5]={"Imprimir las ventas de:","Imprimir ano y ventas del ano mas productivo","Imprimir ano y ventas del ano menos productivo","Promedio total de ventas","Imprimir Histograma de ventas por ano"}; 
			
			do{
				clrscr();
				for(i=0;i<5;i++){
					printf("%d.- %s\n",i+1,opciones[i]);
				}
				printf("\nSelecciona tu opcion: ");
				scanf("%d",&opcion);
				
				switch (opcion){
					case 1:{
						printf("Ingrese el a%co a buscar: ",164);
						scanf("%d",&buscado);
						
						for(i=0;i<years;i++){
							if(arr[i][0]==buscado){
								flag=1;
								b=i;
							}
						}
						
						if(flag==1){
							for(j=1;j<4;j++){
								printf("%d , ",arr[b][j]);
							}
						}else{
							printf("No fue capturado este a%co",164);
						}
						
						break;
					}
					case 2:{
						int arrUni[years],aum,b=0;
						
						for(i=0;i<years;i++){
							aum=0;
							for(j=1;j<4;j++){
								aum=aum+arr[i][j];
							}
							arrUni[i]=aum;
						}
						int mayor=arrUni[0];
						for(i=0;i<years;i++){
							if(mayor<arrUni[i]){
								mayor=arrUni[i];
								b=i;
							}
						}
						for(i=0;i<4;i++){
							if(i==0){
								printf("El a%co: ",164);
								printf("%d \nVentas: ",arr[b][i]);
							}else{
								printf("%d, ",arr[b][i]);
							}
						}
						break;
					}
					case 3:{
						int arrUni2[years],aum,c=0;
						
						for(i=0;i<years;i++){
							aum=0;
							for(j=1;j<4;j++){
								aum=aum+arr[i][j];
							}
							arrUni2[i]=aum;
						}
						int menor=arrUni2[0];
						
						for(i=0;i<years;i++){
							if(menor>arrUni2[i]){
								menor=arrUni2[i];
								c=i;
							}
						}
						for(i=0;i<4;i++){
							if(i==0){
								printf("El a%co: ",164);
								printf("%d \nVentas: ",arr[c][i]);
							}else{
								printf("%d, ",arr[c][i]);
							}
						}
						break;
					}
					
					case 4:{
						float aum=0;
						
						for(i=0;i<years;i++){
							for(j=1;j<4;j++){
								aum=aum+arr[i][j];
							}
						}
						
						aum=aum/(years*3);
						
						printf("El promedio total de ventas fue igual a: %0.2f",aum);
						break;
					}
					
					case 5:{
						int arrUni3[years],aum;
						
						for(i=0;i<years;i++){
							aum=0;
							for(j=1;j<4;j++){
								aum=aum+arr[i][j];
							}
							arrUni3[i]=aum;
						}
						
						int mayor=arrUni3[0];
						for(i=0;i<years;i++){
							if(mayor<arrUni3[i]){
								mayor=arrUni3[i];
							}
						}
						
						printf("        ");
						for(i=1;i<=mayor;i++){
							printf("%d",i);
						}
						
						
						for(i=0;i<years;i++){
							printf("\n %d - ",arr[i][0]);
							for(j=0;j<arrUni3[i];j++){
								printf("%c",219);
							}
							printf("\n");
						}
						
						break;
					}
					default:{
						clrscr();
					}
				}
				getche();
			}while(opcion!=6);
			
		}else{	
	}
}
