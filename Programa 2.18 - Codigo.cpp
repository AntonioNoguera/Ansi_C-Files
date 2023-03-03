//2.18 Programa que permite catpturar n alumnos, matriculas, y sus calificaciones de tares, ordinario y medio curso
#include<stdio.h>
#include<conio2.h>
main(){
	int N,i,j,k,opcion;
	printf("Ingrese la cantidad de alumnos que desea capturar: ");scanf("%d",&N);
	float arr[N][4];
	 
	const char* valores[4]={"Matricula","calificacion de las tareas","calificacion del Medio Curso","calificacion del Ordinario"};
	const char* opciones[5]={"Imprimir tabla de alumnos","Imprimir el % de alumnos reprobados","Imprimir matriculas aprobadas y reprobadas","Imprimir Promedio del grupo","Salir"};
	
	for(i=0;i<N;i++){
		printf("\nDatos del alumno %d:\n",i+1);
		for(j=0;j<4;j++){
			printf("Ingrese su %s: ",valores[j]); scanf("%f",&arr[i][j]);
		}
	}
	
	do{
	clrscr();
		for(i=0;i<5;i++){		printf("%d.- %s\n",i+1,opciones[i]);		}
		
		float prom=0;	
		for(k=0;k<3;k++){
			if(i<2){
				prom = prom+((arr[i][k+1])*.30);
			}else{
				prom = prom+((arr[i][k+1])*.40);
			}
		}			
		printf("\n\nIngrese su opcion:    ");scanf("%d",&opcion);clrscr();
		
		switch (opcion){
			case 1:{
				printf("\tMatricula\t|\tTareas\t|\tMedio Curso\t|\tOrdinario\t|\tPromedio\t|\n");
					for(i=0;i<N;i++){
						printf("\t");
						
						arr[i][4]=prom;
						for(j=0;j<5;j++){
							if(j==4){
								printf("%0.2f\t\t|\t",arr[i][j]);
							}else if(j!=1){
								printf("%0.0f\t\t|\t",arr[i][j]);
							}else{
								printf("%0.0f\t|\t",arr[i][j]);
							}
						}
						printf("\n");
					}
				break;
			}
			case 2:{
				int reprobados=0;
				for(i=0;i<N;i++){
					if(arr[i][4]<70){	reprobados++;	}
				}
				printf("Alumnos Reprobados: %d",reprobados);
				break;
			}
			case 3:{
				printf("Aprobadas:\n");
				for(i=0;i<N;i++){
					if(arr[i][4]>=70){
						printf("%0.0f    %0.2f\n",arr[i][0],arr[i][4]);
					}
				}
				printf("\nReprobadas:\n");
				for(i=0;i<N;i++){
					if(arr[i][4]<70){
						printf("%0.0f    %0.2f\n",arr[i][0],arr[i][4]);
					}
				}
				break;
			}
			case 4:{
				float promedio=0;
				for(i=0;i<N;i++){	promedio=promedio+arr[i][4];}
				promedio=promedio/N;
				printf("Promedio: %0.2f",promedio);
				break;
			}
		}
		getche();
	}while(opcion!=5);
}
