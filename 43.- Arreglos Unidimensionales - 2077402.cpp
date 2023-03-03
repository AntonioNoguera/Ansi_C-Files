#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<string.h>

int N,i,opcion,Flag=1;
void menu();void marco();void Fullscreen();
void opcion1();void opcion2();void opcion3();void opcion4();void opcion5();void opcion6();void opcion7();void opcion8();void opcion9();
void opcion10();void opcion11();void opcion12();void opcion13();void opcion14();
int centrador(int);

int A[100],B[100],C[100],D[100],E[100],F[100],G[100],H[100];

main(){
	srand(time(NULL));
	Fullscreen();
	do{
		clrscr();
		gotoxy(25,3);
		printf("Ingrese el tama%co est%cndar del arreglo: ",164,160);
		scanf("%d",&N);
		if(N<=0){
			clrscr();
			printf("Ingrese un valor mayor a cero.");
			Sleep(500);
		}
	}while(N<=0);
	menu();
}

void marco(){
	for(i=20;i<=140;i++){gotoxy(i,6); printf("%c",219);gotoxy(i,36); printf("%c",219);}
	for(i=6;i<=36;i++){gotoxy(20,i); printf("%c",219);gotoxy(140,i); printf("%c",219);}
}

void menu(){
	do{
		clrscr();
		marco();
		gotoxy(25,3);printf("Tama%co del array:  %d",164,N);
		const char* menu[]={"Lectura del Vector A","Genera en automatico el vector B","Suma de vector A+B",
		"Colorear el elemento mayor del vector A","Colorear el elemento menor del vector B",
		"Colorear las casillas pares del vector A","Colorear las casillas nones del vector B",
		"Colorear los elementos que esten por arriba del promedio A","Obtener la desviacion estandar del vector B",
		"Ordenar el vector A","Juntar los 2 vectores en otro vector","Separa los numeros pares en un vector y nones en otro vector",
		"El usuario delimite el rango de valores en un vector","Salir"};
		for(i=0;i<14;i++){
			gotoxy(25,((i+1)*2)+6);printf("%d.- %s",i+1,menu[i]);
		}
		gotoxy(25,38);printf("Ingrese su seleccion: ");scanf("%d",&opcion);
		if(opcion<=0 || opcion>=15){
			clrscr();printf("Seleccion invalida");Sleep(700);
		}else{
			clrscr();marco();
			
			gotoxy(centrador(strlen(menu[opcion-1])),4);
			printf(menu[opcion-1]);
			
			switch(opcion){
				case 1:{opcion1();break;}
				case 2:{opcion2();break;}
				case 3:{opcion3();break;}
				case 4:{opcion4();break;}
				case 5:{opcion5();break;}
				case 6:{opcion6();break;}
				case 7:{opcion7();break;}
				case 8:{opcion8();break;}
				case 9:{opcion9();break;}
				case 10:{opcion10();break;}
				case 11:{opcion11();break;}
				case 12:{opcion12();break;}
				case 13:{opcion13();break;}
				case 14:{opcion14();break;}
			}
		}
		
	}while(opcion!=14);
}

void opcion1(){
	for(i=0;i<N;i++){
				gotoxy(25,((i+1)*2)+8);
				printf("Ingrese el valor numero %d:  ",i+1);
				scanf("%d",&A[i]);
			}
			gotoxy(25,((i+2)*2)+8);
			printf("Valores Capturados con exito.");
		
			getche();
}

void opcion2(){
	for(i=0;i<N;i++){
		gotoxy(25,((i+1)*2)+8);
		printf("Valor numero %d generado:  ",i+1);
		B[i]=rand()%100+1;
		printf("%d",B[i]);
		Sleep(200); 
	}
	getche();
}

void opcion3(){
	gotoxy(25,8);
	printf("Vector A:");
	for(i=0;i<N;i++){
		printf("%d, ",A[i]);
	}
	gotoxy(25,10);
	printf("Vector B:");
	for(i=0;i<N;i++){
		printf("%d, ",B[i]);
	}
	gotoxy(25,12);
	printf("Sumatoria:");
	for(i=0;i<N;i++){
		C[i]=A[i]+B[i];
		gotoxy(25,((i+1)*2)+12);printf("%d + %d = %d",A[i],B[i],C[i]);
	}
	getche();
}

void opcion4(){
	int mayor=A[0], menor=A[0];
	for(i=0;i<N;i++){if(mayor<A[i]){mayor=A[i];}}
	
	gotoxy(25,10);
	printf("Valores del Arreglo A: [ ");
			for(i=0;i<N;i++){
				if(A[i]==mayor){
					textbackground(15);
					textcolor(0);
					printf("%d",A[i]);
				}else{
					printf("%d",A[i]);
				}
				textbackground(0);
				textcolor(15);
				if(i<N-1){printf(" , ");}else{printf(" ]");}
			}
	getche();
}

void opcion5(){
	int menor=B[0];
	for(i=0;i<N;i++){
		if(menor>B[i]){menor=B[i];}
	}
	gotoxy(25,10);
	printf("Valores del Arreglo B: [ ");
			for(i=0;i<N;i++){
				if(B[i]==menor){
					textbackground(15);
					textcolor(0);
					printf("%d",B[i]);
				}else{
					printf("%d",B[i]);
				}
				textbackground(0);
				textcolor(15);
				if(i<N-1){printf(" , ");}else{printf(" ]");}
			}
	getche();
}

void opcion6(){
	gotoxy(25,10);
	printf("Valores del Arreglo A: [ ");
			for(i=0;i<N;i++){
				if((i+1)%2==0){
					textbackground(15);
					textcolor(0);
					printf("%d",A[i]);
				}else{
					printf("%d",A[i]);
				}
				textbackground(0);
				textcolor(15);
				if(i<N-1){printf(" , ");}else{printf(" ]");}
			}
	getche();
}

void opcion7(){
	gotoxy(25,10);
	printf("Valores del Arreglo B: [ ");
			for(i=0;i<N;i++){
				if(B[i]%2!=0){
					textbackground(15);
					textcolor(0);
					printf("%d",B[i]);
				}else{
					printf("%d",B[i]);
				}
				textbackground(0);
				textcolor(15);
				if(i<N-1){printf(" , ");}else{printf(" ]");}
			}
	getche();
}

void opcion8(){
	float sumatoria;
	for(i=0;i<N;i++){
		sumatoria=sumatoria+A[i];
	}
	sumatoria=sumatoria/N;
	
	gotoxy(25,10);printf("Promedio: %.2f",sumatoria);
	gotoxy(25,12);
	printf("Valores del Arreglo A: [ ");
	for(i=0;i<N;i++){
				if(A[i]>sumatoria){
					textbackground(15);
					textcolor(0);
					printf("%d",A[i]);
				}else{
					printf("%d",A[i]);
				}
				textbackground(0);
				textcolor(15);
				if(i<N-1){printf(" , ");}else{printf(" ]");}
			}
	getche();
}

void opcion9(){
	int tipo;
	float prom,sumat=0,desviacion;
	gotoxy(25,10);printf("Tomar los datos como una poblacion=0, tomar los datos como una muestra=1: ");scanf("%d",&tipo);
	
	gotoxy(25,12);printf("Valores del Arreglo B: [ ");
	
	for(i=0;i<N;i++){
			printf("%d",B[i]);
			if(i<N-1){printf(" , ");}else{printf(" ]");}
	}
	
	for(i=0;i<N;i++){prom=prom+B[i];}			prom=prom/N;
	
	gotoxy(25,14);printf("Promedio:  %f",prom);
	
	for(i=0;i<N;i++){	sumat= sumat+((B[i]-prom)*(B[i]-prom));	}
	
	desviacion = sqrt(sumat/(N-1));
	gotoxy(25,16);printf("Desviacion estandar:  %f",desviacion);	
	getche();
}

void opcion10(){
	//Ordena
	int j;
	int tmp;
	gotoxy(25,12);printf("Valores del Arreglo A (Antes de Ser Ordenado): [ ");
	
	for(i=0;i<N;i++){
			E[i]=A[i];
			printf("%d",A[i]);
			if(i<N-1){printf(" , ");}else{printf(" ]");}
	}
  getche();
  
  for(i = 1; i < N; i++) {										
    for(j = 0; j < N - i; j++) {					
      if(E[j] > E[j + 1]) {			
        tmp = E[j];									
        E[j] = E[j + 1];		
        E[j + 1] = tmp;									
      }
    }
  }
  gotoxy(25,14);printf("Valores del Arreglo A (Despues de Ser Ordenado): [ ");
  
	for(i=0;i<N;i++){
			printf("%d",E[i]);
			if(i<N-1){printf(" , ");}else{printf(" ]");}
	}
  getche();
}

void opcion11(){
	//	Juntar los dos vectores en otro
	gotoxy(25,12);printf("Valores del Arreglo A: [ ");
	for(i=0;i<N;i++){
		printf("%d",A[i]);
		if(i<N-1){printf(" , ");}else{printf(" ]");}
	}
	
	gotoxy(25,14);printf("Valores del Arreglo B: [ ");
	for(i=0;i<N;i++){
		printf("%d",B[i]);
		if(i<N-1){printf(" , ");}else{printf(" ]");}
	}
	
	int e=0;
	for(i=0;i<(N*2);i++){
		if(i<N){
			D[i]=A[i];
		}else{
			D[i]=B[e];
			e++;
		}
	}
	gotoxy(25,16);printf("Valores del Arreglo C: [ ");
			for(i=0;i<N*2;i++){
				Sleep(800);
				printf("%d",D[i]);
				if(i<(N*2)-1){printf(" , ");}else{printf(" ]");}
			}
	getche();
}

void opcion12(){
	//Separa los numeros pares en un vector y nones en otro vector
	//Arreglo D, (G - H)
	int l=0,m=0;
	for(i=0;i<N*2;i++){
		if(D[i]%2==0){
			G[l]=D[i];
			l++;
		}else{
			H[m]=D[i];
			m++;
		}
	}
	
	gotoxy(25,10);printf("Valores del Arreglo C: [ ");
			for(i=0;i<N*2;i++){
					printf("%d",D[i]);
				if(i<(N*2)-1){printf(" , ");}else{printf(" ]");}
			}
	gotoxy(25,12);printf("Valores Pares del Arreglo C: [ ");
			for(i=0;i<N;i++){
					printf("%d",G[i]);
				if(i<N){printf(" , ");}else{printf(" ]");}
			}
	
	gotoxy(25,14);printf("Valores Nones del Arreglo C: [ ");
			for(i=0;i<N;i++){
					printf("%d",H[i]);
				if(i<N){printf(" , ");}else{printf(" ]");}
			}
			
	getche();
}

void opcion13(){
	//Aleatorio desde el otro arreglo
	int bot,top;
	do{
	marco();
	gotoxy(25,10);
	printf("Ingrese su limite inferior: ");scanf("%d",&bot);
	gotoxy(25,12);
	printf("Ingrese su limite superior: ");scanf("%d",&top);
	if(bot>=top){
		clrscr();printf("Ingrese limites correctos.");Sleep(700);
	}
	}while(bot>=top);
	
	for(i=0;i<N;i++){
		F[i]=rand()%(top-bot+1)+bot;
	}
	gotoxy(25,14);printf("Valores del Arreglo D ( %d , %d ): [ ",bot,top);
		for(i=0;i<N;i++){
				printf("%d",F[i]);
				if(i<N-1){printf(" , ");}else{printf(" ]");}
			}
	getch();
}

void opcion14(){
	clrscr();
	//Salir
}

int centrador(int size){
	return (120-size)/2+20;
}

void Fullscreen(){
	keybd_event(VK_MENU, 0x38, 0, 0);keybd_event(VK_RETURN, 0x1c, 0, 0);keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);return;
}

