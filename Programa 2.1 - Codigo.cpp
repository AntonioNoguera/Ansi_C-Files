//2.1 Tabla de calificaciones, grupo de N alumnos, Captura matricula, Captura medio curso y ordinario
#include<stdio.h>
#include<conio2.h>
main(){
	int N,i,j;
	const char* valores[3]={"Matricula","calificacion del Medio Curso","calificacion del Ordinario"};
	
	printf("Ingrese la cantidad de alumnos que desea capturar: ");scanf("%d",&N);
	int arr[N][3];
	
	for(i=0;i<N;i++){
		printf("\nDatos del alumno %d:\n",i+1);
		for(j=0;j<3;j++){
			printf("Ingrese %s: ",valores[j]);
			scanf("%d",&arr[i][j]);
		}
	}
	clrscr();
	printf("\tMatricula\t|\tMedio Curso\t|\tOrdinario\t|\n");
	for(i=0;i<N;i++){
		printf("\t");
		for(j=0;j<3;j++){
			printf("%d\t\t|\t",arr[i][j]);
		}
		printf("\n");
	}
}
