//Noguera Guzman Michael Antonio
//Notese el uso nulo del GOTOXY, solo fue para practicar el razonamiento matematico
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<time.h>
#include<string.h>

int i,j,k,l;

main(){
	srand(time(NULL));
	
	int arr[4][7];
	char nom[4][50];
	
	const char* diaSemana[7]={"L","M","M","J","V","S","D"};
	
	for(i=0;i<4;i++){
		printf("Ingrese el nombre del trabajador %d: ",i+1);   scanf("%s",&nom[i]);
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			arr[i][j]=rand()%20;
		}
	}
	
	int sumatoriaPorVendedor[4];
	for(i=0;i<4;i++){
		int sum=0;
		for(j=0;j<7;j++){
			sum=sum+arr[i][j];
		}
		sumatoriaPorVendedor[i]=sum;
	}
	int grande=sumatoriaPorVendedor[0];
	for(i=0;i<4;i++){
		if(grande<sumatoriaPorVendedor[i]){
			grande=sumatoriaPorVendedor[i];
		}
	}
	
	int sumatoriaPorDia[7];
	for(i=0;i<7;i++){
		int sum=0;
		for(j=0;j<4;j++){
			sum=sum+arr[j][i];
		}
		sumatoriaPorDia[i]=sum;
	}
	
	int chico=sumatoriaPorDia[0];
	
	for(i=0;i<7;i++){
		if(chico>sumatoriaPorDia[i]){
			chico=sumatoriaPorDia[i];
		}
	}
	
	int mayor=strlen(nom[0]);
	for(i=0;i<4;i++){
		if(mayor<strlen(nom[i])){
			mayor=strlen(nom[i]);
		}
	}
	
	printf("Arreglo generado:\n\n");
	printf("Vendedores:");
	if(mayor<16){
		mayor=16;
	}
	for(i=0;i<mayor+3-11;i++){
		printf(" ");
	}
	printf("|");
	for(i=0;i<7;i++){
		printf("    %s    |",diaSemana[i]);
	}printf("  Ventas p/vendedor\n");
	
	for(k=0;k<mayor+4+(7*10);k++){
		printf("-");
	}
	printf("\n");
	
		for(i=0;i<4;i++){
			printf("%s",nom[i]);
			int contador=mayor-strlen(nom[i])+3;
			
			for(k=0;k<contador;k++){
				printf(" ");
			}
			printf("|");
			for(j=0;j<7;j++){
				printf("    %d",arr[i][j]);
				
				int residuo=arr[i][j];
				int contador=0;
				do{
					if(residuo/10>0){
						contador++;
					}
					residuo=residuo/10;
				}while(residuo>0);
				contador=4-contador;
				for(k=0;k<(contador);k++){
					printf(" ");
				}
				printf("|");
				
			}
			printf("    ");
			if(sumatoriaPorVendedor[i]==grande){
				textcolor(BLACK);
				textbackground(WHITE);
				printf("%d",sumatoriaPorVendedor[i]);
				textcolor(7);
				textbackground(BLACK);
				printf(" Premio: %0.2f",(((float)sumatoriaPorVendedor[i]*.02)+(float)sumatoriaPorVendedor[i]));
			}else{
				textcolor(7);
				textbackground(BLACK);
				printf("%d",sumatoriaPorVendedor[i]);
			}
			textcolor(7);
			textbackground(BLACK);
			printf("\n");
		}
		for(k=0;k<mayor+4+(7*10);k++){
			printf("-");
		}printf("\n");
		printf("Ventas p/dia:");
		
		for(i=0;i<mayor+3-13;i++){
			printf(" ");
		}
		printf("|");
		for(i=0;i<7;i++){
			printf("    ");
			if(sumatoriaPorDia[i]==chico){
				textcolor(BLACK);
				textbackground(WHITE);
			}else{
				textcolor(7);
				textbackground(BLACK);
			}
			printf("%d",sumatoriaPorDia[i]);
			textcolor(7);
			textbackground(BLACK);
			int residuo=sumatoriaPorDia[i];
				int contador=0;
				do{
					if(residuo/10>0){
						contador++;
					}
					residuo=residuo/10;
				}while(residuo>0);
				contador=4-contador;
				for(k=0;k<(contador);k++){
					printf(" ");
				}
			printf("|");
		}
		printf("\n");
		for(k=0;k<mayor+4+(7*10);k++){
			printf("-");
		}printf("\n");
		//creacion del array de porcentajess
		float sumatoriaVentas=0;
		for(i=0;i<7;i++){
			sumatoriaVentas=sumatoriaVentas+sumatoriaPorDia[i];
		}
		printf("Porcentaje p/dia:");
		float porcentajes[7];
		for(i=0;i<mayor+3-17;i++){
			printf(" ");
		}
		for(i=0;i<7;i++){
			porcentajes[i]=(100*sumatoriaPorDia[i])/sumatoriaVentas;
			printf("|  %0.2f%c",porcentajes[i],37);
			
			int residuo=(int)porcentajes[i];
				int contador=0;
				do{
					if(residuo/10>0){
						contador++;
					}
					residuo=residuo/10;
				}while(residuo>0);
			contador=2-contador;
			for(k=0;k<(contador);k++){
				printf(" ");
			}
		}
		printf("|");
		getche();
}
