//Programa 1.5
//Calificaciones dadas 3 personas

#include<stdio.h>

int i,Apr,Rep,calif,Prom;

main(){
	
	for(i=1;i<=3;i++){
		printf("Ingrese su calificaci%cn: ",162);
		scanf("%d",&calif);
		
		if(calif>=70){
			Apr=Apr+1;
		}else{
			Rep=Rep+1;
		}
	}
	Prom=(Apr*100)/3;
	printf("\nCantidad de alumnos aprobados: %d",Apr);
	printf("\nCantidad de alumnos reprobados: %d",Rep);
	printf("\nEl porcentaje de aprobaci%cn fue de: %d %c",162,Prom,37);
	
}
