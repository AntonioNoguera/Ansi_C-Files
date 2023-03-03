//Programa para simular el juego de los dados ciclicos y apuestas Gana la suma =7 u =11

#include<stdio.h>
#include<conio2.h>
#include<windows.h> 
#include<time.h>
#include<stdlib.h>

int saldo=100,apostado,Dado1,Dado2,ddd;

void validacion();void TiroDeDados();void Fullscreen();

main(){
	textcolor(6);textbackground(14);
	clrscr();
	printf("Modo pantalla completa si=0, no=1: ");
	scanf("%d",&ddd);
	
	if(ddd==0){
		Fullscreen();
	}
	do{
		clrscr();
		validacion();
		
		Sleep(1000);
		TiroDeDados();
		
		
		
		if(((Dado1+Dado2)==7) || ((Dado1+Dado2)==11)){
			printf("\n\n\n\n%d + %d = %d\n\nGANASTE",Dado1,Dado2,Dado1+Dado2);
			saldo=saldo+apostado;
		}else{
			printf("\n\n\n\n%d + %d = %d\n\nPERDISTE",Dado1,Dado2,Dado1+Dado2);
			saldo=saldo-apostado;
		}
		
		printf("\n\nPresione cualquier tecla para volver a jugar.");
		getche();
	
	}while(saldo>0);
	clrscr();
	printf("-- Juego Terminado --");
	getche();
}

void validacion(){
	do{
			clrscr();
			
			printf("Juego de Dados: \n\n");
			printf("Saldo Actual: %d\n",saldo);
			printf("\nIngrese el saldo a apostar: ");
			scanf("%d",&apostado);
		}while(apostado>saldo || apostado<=0);
}

void ImpresionDeDados(int Dad1,int Dad2){
	int i,e,u[2]={1,15},lim[2]={11,25},A[2]={Dad1,Dad2},valorExtra=0;
	
	for(i=0;i<2;i++){
		
		for(u[i];u[i]<=lim[i];u[i]++){
				gotoxy(u[i],8);
				if(u[i]==1 || u[i]==15){printf("%c",201);
				}else if(u[i]==11 ||u[i]==25){printf("%c",187);
				}else{printf("%c",205);}
				
				gotoxy(u[i],12);
				if(u[i]==1 || u[i]==15){printf("%c",200);
				}else if(u[i]==11 || u[i]==25){printf("%c",188);
				}else{printf("%c",205);}
			
			}
			
		for(e=1;e<=3;e++){
			gotoxy((u[i]-11),(e+8));printf("%c",186);
			gotoxy(lim[i],(e+8));printf("%c",186);
		}	
			
			if(i==1){
				valorExtra=14;
			}
			
		switch(A[i]){
			case 1:{
				//Cara1
				gotoxy((6+valorExtra),10);printf("%c",158);
				
				break;
			}
			case 2:{
				//Cara2
				gotoxy((4+valorExtra),11);printf("%c",158);
				gotoxy((8+valorExtra),9);printf("%c",158);
				
				break;
			}
			case 3:{
				//Cara3
				gotoxy((4+valorExtra),11);printf("%c",158);
				gotoxy((6+valorExtra),10);printf("%c",158);
				gotoxy((8+valorExtra),9);printf("%c",158);
				
				break;
			}
			case 4:{
				//Cara4
				gotoxy((8+valorExtra),9);printf("%c",158);
				gotoxy((4+valorExtra),11);printf("%c",158);
				
				gotoxy((4+valorExtra),9);printf("%c",158);
				gotoxy((8+valorExtra),11);printf("%c",158);
				break;
				break;
			}
			case 5:{
				//Cara5
				gotoxy((8+valorExtra),9);printf("%c",158);
				gotoxy((4+valorExtra),11);printf("%c",158);
				gotoxy((6+valorExtra),10);printf("%c",158);
				gotoxy((4+valorExtra),9);printf("%c",158);
				gotoxy((8+valorExtra),11);printf("%c",158);
				break;
			}
			case 6:{
				//Cara6
				gotoxy((8+valorExtra),9);printf("%c",158);
				gotoxy((4+valorExtra),11);printf("%c",158);
				gotoxy((8+valorExtra),10);printf("%c",158);
				gotoxy((4+valorExtra),10);printf("%c",158);
				gotoxy((4+valorExtra),9);printf("%c",158);
				gotoxy((8+valorExtra),11);printf("%c",158);
				break;
			}
		}
	}
}

void TiroDeDados(){
	int r;
	srand(time(NULL));
	Dado1=((rand()%6)+1); Dado2=((rand()%6)+1);
	ImpresionDeDados(Dado1,Dado2);
}

void Fullscreen()
{
keybd_event(VK_MENU, 0x38, 0, 0);
keybd_event(VK_RETURN, 0x1c, 0, 0);
keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
return;
}



