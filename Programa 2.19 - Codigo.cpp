#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<time.h>

void impresor(int[],int);

main(){
	int M,N,bot,top,aux,i,j,pares,nones,primos,perfectos,seleccion,k,l;
	srand(time(NULL));
	do{
		printf("Ingrese la cantidad de lineas del arreglo:");
		scanf("%d",&M);
	}while(M<=0);
	
	do{
		printf("Ingrese la cantidad de columnas del arreglo:");
		scanf("%d",&N);
	}while(N<=0);
	
	int arr[M][N];
	
	printf("Ingrese el limite inferior: ");
	scanf("%d",&bot);
	printf("Ingrese el limite superior: ");
	scanf("%d",&top);
	
	if(bot>top){
		aux=bot;
		bot=top;
		top=aux;
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			arr[i][j]=rand()%(top-bot+1)+bot;
		}
	}
	
	const char* opciones[5]={"Numeros Pares","Numeros Impares","Numeros Primos","Numeros Perfectos","Salir"};
	
	do{
		clrscr();
		
		printf("Arreglo generado:\n\n");
		for(i=0;i<M;i++){
			for(j=0;j<N;j++){
				printf("\t%d\t|",arr[i][j]);
			}
			printf("\n");
		}
		printf("\n\n");
		
		for(i=0;i<5;i++){
			printf("%d.- %s\n",i+1,opciones[i]);
		}
		printf("\nIngrese su seleccion: ");
		scanf("%d",&seleccion);
		switch (seleccion){
			case 1:{
				pares=0;
				
				for(i=0;i<M;i++){
					for(j=0;j<N;j++){
						if(arr[i][j]%2==0){
							pares++;
						}
					}
				}
				int tempArr[pares];
				l=0;
				for(i=0;i<M;i++){
					for(j=0;j<N;j++){
						if(arr[i][j]%2==0){
							tempArr[l]=arr[i][j];
							l++;
						}
					}
				}
				printf("\n\nMatriz de Numeros Pares: \n\n");
				impresor(tempArr,pares);
				printf("\nPares: %d",pares);
				break;
			}
			case 2:{
				nones=0;
				
				for(i=0;i<M;i++){
					for(j=0;j<N;j++){
						if(arr[i][j]%2!=0){
							nones++;
						}
					}
				}
				
				int tempArr[nones];
				l=0;
				for(i=0;i<M;i++){
					for(j=0;j<N;j++){
						if(arr[i][j]%2!=0){
							tempArr[l]=arr[i][j];
							l++;
						}
					}
				}
				printf("\n\nMatriz de Numeros Nones: \n\n");
				impresor(tempArr,nones);
				printf("\nNones: %d",nones);
				break;
			}
			case 3:{
				int cont;
				primos=0;
				for(i=0;i<M;i++){
					for(j=0;j<N;j++){
						//Codigo de primo+
						cont=0;
						for(k=1;k<=arr[i][j];k++){
							if(arr[i][j]%k==0){
								cont++;
							}
						}
						if(cont==2){
						primos++;
						}
					}
				}
				//arrar
				int tempArr[primos];
				l=0;
				for(i=0;i<M;i++){
					for(j=0;j<N;j++){
						//Codigo de primo+
						cont=0;
						for(k=1;k<=arr[i][j];k++){
							if(arr[i][j]%k==0){
								cont++;
							}
						}
						if(cont==2){
						tempArr[l]=arr[i][j];
						l++;
						}
					}
				}
				printf("\n\nMatriz de Numeros Primos: \n\n");
				impresor(tempArr,primos);
				printf("\nPrimos: %d",primos);
				break;
			}
			case 4:{
				int sum;
				perfectos=0;
				for(i=0;i<M;i++){
					for(j=0;j<N;j++){
						//iterador de numero
						sum=0;
						for(k=1;k<arr[i][j];k++){
							if(arr[i][j]%k==0){
								sum=sum+k;
							}
						}
					//Aqui mero
						if(sum==arr[i][j] && sum!=0){
							perfectos++;
						}
					}
				}
				
				int tempArr[perfectos];
				l=0;
				for(i=0;i<M;i++){
					for(j=0;j<N;j++){
						//iterador de numero
						sum=0;
						for(k=1;k<arr[i][j];k++){
							if(arr[i][j]%k==0){
								sum=sum+k;
							}
						}
					//Aqui mero
						if(sum==arr[i][j] && sum!=0){
							tempArr[l]=arr[i][j];
							l++;
						}
					}
				}
				printf("\n\nMatriz de Numeros Perfectos: \n\n");
				impresor(tempArr,perfectos);
				printf("\nPerfectos: %d",perfectos);
				break;
			}
			default:{
				
			}
		}
		getche();
	}while(seleccion!=5);
}

void impresor(int arr[],int length){
	int i=0,j=0,k=0;
	int neoM=0,neoN=0;
	
	int divisores=0;
	
	for(i=1;i<=length;i++){
		if(length%i==0){
			divisores++;
		}
	}
	
	int ArrDivisores[divisores];
	
	for(i=1;i<=length;i++){
		if(length%i==0){
			ArrDivisores[j]=i;
			j++;
		}
	}
	
	if(divisores%2==0){
		neoM=(divisores/2);
	}else{
		neoM=((divisores+1)/2);
	}
	neoM=ArrDivisores[neoM-1];
	neoN=length/neoM;
	
	int neoArreglo[neoM][neoN];
	
	for(i=0;i<neoM;i++){
		for(j=0;j<neoN;j++){
			neoArreglo[i][j]=arr[k];
			k++;
		}
	}
	
	for(i=0;i<neoM;i++){
		for(j=0;j<neoN;j++){
			printf("\t%d\t|",neoArreglo[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}
