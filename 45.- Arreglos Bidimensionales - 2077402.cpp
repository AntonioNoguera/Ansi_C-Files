//Noguera Guzmán Michael Antonio - 12/05/2021
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include<math.h>

int i,j,k;
void marco();void Fullscreen();int centrador(int);

main(){
	srand(time(NULL));
	int N,opcion, distX,distXi,distY;
	Fullscreen();
	printf("Ingrese el orden de su matriz: ");
	scanf("%d",&N);
	
	int A[N][N],B[N][N],C[N][N];
	
	const char* opciones[]={"Lectura de A","Generar aleatoria B","Suma de A + B","Colorear DP de A","Colorear DS de B","Colorear y promediar MTS de A","Colorear y promediar MTI de B","Colorear filas pares de A","Colorear columnas nones de B","Multiplicacion de Matriz A * B","Transpuesta de A", "Colorear la periferia de la matriz  B","Colorear el elemento mayor","Pasar la primera fila a un vector","Obtener el n de pares, y n nones en la matriz","Obtener la desviacion estandar de la matriz","Salir"};
	
	do{
		clrscr();marco();
		
		for(i=0;i<17;i++){
			gotoxy(28,(i+1)*2+4);
			printf("%d.- %s",i+1,opciones[i]);
		}
		gotoxy(70,40);printf("Ingrese su opcion:     ");scanf("%d",&opcion);
		
		clrscr();marco();
		gotoxy(centrador(strlen(opciones[opcion-1])),2);printf(opciones[opcion-1]);
		
		distX=((133-(4*N)-4)/2)+20;
		
		switch (opcion){
			case 1:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						scanf("%d",&A[i][j]);
					}
				}
				break;
			}
			case 2:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						B[i][j]=rand()%99+1;
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						printf("%d",B[i][j]);
						Sleep(300);
					}
				}
				break;
			}
			case 3:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						C[i][j]=A[i][j]+B[i][j];
					}
				}
				textcolor(8);gotoxy(distX+1,(N+1)/2+12);printf("+");
				gotoxy(distX+N*4+4,(N+1)/2+12);printf("=");textcolor(15);
				
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX-2-4*N,((i+1)*2)+10);printf("%d",A[i][j]);
					}
				}
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);printf("%d",B[i][j]);
					}
				}
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX+3+N*4,((i+1)*2)+10);printf("%d",C[i][j]);
					}
				}
				break;
			}
			case 4:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						if(i==j){
							textcolor(0);textbackground(15);
						}else{
							textcolor(15);textbackground(0);
						}
						printf("%d",A[i][j]);
					}
				}
				textcolor(15);textbackground(0);
				break;
			}
			case 5:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						if((i+1)+(j+1)==(N+1)){
							textcolor(0);textbackground(15);
						}else{
							textcolor(15);textbackground(0);
						}
						printf("%d",B[i][j]);
					}
				}
				textcolor(15);textbackground(0);
				break;
			}
			case 6:{
				int aum=-1;
				float prom=0,cont=0;
				
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
							if(j>aum){
								textcolor(0);textbackground(15);
								prom = prom + A[i][j];
								cont++;
							}else{
								textcolor(15);textbackground(0);
							}
						printf("%d",A[i][j]);
					}
					aum++;
				}
				gotoxy(81,((i+2)*2)+10);
				printf("Promedio: %f",prom/cont);
				textcolor(15);textbackground(0);
				
				break;
			}
			case 7:{
				int aum=1;
				float prom=0,cont=0;
				
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
							if(j<aum){
								textcolor(0);textbackground(15);
								prom = prom + A[i][j];
								cont++;
							}else{
								textcolor(15);textbackground(0);
							}
						printf("%d",B[i][j]);
					}
					aum++;
				}
				gotoxy(81,((i+2)*2)+10);
				printf("Promedio: %f",prom/cont);
				textcolor(15);textbackground(0);
				break;
			}
			case 8:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						if((j+1)%2==0){
							textcolor(0);textbackground(15);
						}else{
							textcolor(15);textbackground(0);
						}
						printf("%d",A[i][j]);
					}
				}
				textcolor(15);textbackground(0);
				break;
			}
			case 9:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						if((j+1)%2!=0){
							textcolor(0);textbackground(15);
						}else{
							textcolor(15);textbackground(0);
						}
						printf("%d",B[i][j]);
					}
				}
				textcolor(15);textbackground(0);
				break;
			}
			case 10:{
				for(i=0;i<N;i++){
					for(j=0;j<N;i++){
						C[i][j]=0;
						for(k=0;k<N;k++){
							C[i][j]=C[i][j]+A[i][j]*B[j][i];
						}
					}
				}
				
				textcolor(8);
				gotoxy(distX+1,(N+1)/2+12);printf("+");
				gotoxy(distX+N*4+4,(N+1)/2+12);printf("=");
				textcolor(15);
				
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX-2-4*N,((i+1)*2)+10);printf("%d",A[i][j]);
					}
				}
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);printf("%d",B[i][j]);
					}
				}
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX+3+N*4,((i+1)*2)+10);printf("%d",C[i][j]);
					}
				}
				
				break;
			}
			case 11:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						C[i][j]=A[j][i];
					}
				}
				
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);printf("%d",C[i][j]);
					}
				}

				break;
			}
			case 12:{
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						 if(i==0 || i==(N-1) || (j==0) || (j==N-1)){
						 	textcolor(0);textbackground(15);
						}else{
							textcolor(15);textbackground(0);
						}
						printf("%d",B[i][j]);
					}
				}
				textcolor(15);textbackground(0);
				break;
			}
			case 13:{
				int mayor=B[0][0];
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						if(mayor<B[i][j]){
							mayor=B[i][j];
						}
					}
				}
				
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						if(mayor==B[i][j]){
							textcolor(0);textbackground(15);
						}else{
							textcolor(15);textbackground(0);
						}
						printf("%d",B[i][j]);
					}
					textcolor(15);textbackground(0);
				}
				break;
			}
			case 14:{
				int D[N];
				for(i=0;i<N;i++){
					D[i]=A[0][i];
				}
				
				for(i=0;i<N;i++){
					gotoxy(((i+1)*4)+distX,12);
					printf("%d",D[i]);
				}
				
				break;
			}
			case 15:{
				int pares=0,nones=0;
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						if(B[i][j]%2==0){
							pares++;
						}else{
							nones++;
						}
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						printf("%d",B[i][j]);
					}
				}
				gotoxy(75,((i+2)*2)+10);
				printf("Pares: %d   ,   Impares: %d",pares,nones);
				
				break;
			}
			case 16:{
				float prom=0,sumat=0;
			
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						prom=prom+A[i][j];
					}
				}
				prom=prom/(N*N);
				
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						sumat= sumat+((A[i][j]-prom)*(A[i][j]-prom));
					}
				}
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						gotoxy(((j+1)*4)+distX,((i+1)*2)+10);
						printf("%d",A[i][j]);
					}
				}
				sumat=sqrt(sumat/(N*N-1));
				gotoxy(71,((i+2)*2)+10);
				printf("Prom: %0.2f / Desvicacion: %.02f",prom,sumat);
				break;
			}
		}
		gotoxy(centrador(strlen("Oprime cualquier tecla para continuar")),40); printf("Oprime cualquier tecla para continuar");
		getche();
	}while(opcion!=17);
	
}
int centrador(int size){
	return (133-size)/2+20;
}

void marco(){
	for(i=20;i<=153;i++){gotoxy(i,4); printf("%c",219);gotoxy(i,42); printf("%c",219);}
	for(i=4;i<=42;i++){gotoxy(20,i); printf("%c",219);gotoxy(153,i); printf("%c",219);}
}

void Fullscreen(){
	keybd_event(VK_MENU, 0x38, 0, 0);keybd_event(VK_RETURN, 0x1c, 0, 0);keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
	return;
}
