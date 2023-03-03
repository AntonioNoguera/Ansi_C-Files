//Programa que permite escoger y usar funciones matemcticas

#include<stdio.h>
#include<conio2.h>
#include<windows.h> 
#include<math.h>
#include<string.h>

int i,N,seleccion,colEnviada,ColFinal,wat;
void marco();void Fullscreen();void optiones(int seleccion);void centrador(int colEnvida);
const char* opciones[10]={"Valor Absoluto","Raiz Cuadrada","'e' a la n","Logaritmo Natural","Logaritmo Decimal","Seno","Coseno","ArcoSeno","ArcoCoseno","ArcoTangente"};

main(){
	Fullscreen();
	
	do{
		clrscr();marco();
		centrador(strlen("Seleccione una opcion "));
		gotoxy(ColFinal,3);printf("Seleccione una opci%cn:",162);
		
		for(i=1;i<=10;i++){
			gotoxy(26,(i+8));printf("Opci%cn %d: %s.",162,i,opciones[(i-1)]);
		}
		gotoxy(26,30);printf("Ingrese su selecci%cn: ",162);scanf("%d",&N);
		if(N!=11){
			optiones(N);
		}
		
	}while(N!=11);
	clrscr();
}

void marco(){
	for(i=20;i<=140;i++){
		gotoxy(i,6); printf("%c",219);
		gotoxy(i,35); printf("%c",219);
	}
	
	for(i=6;i<=35;i++){
		gotoxy(20,i); printf("%c",219);
		gotoxy(140,i); printf("%c",219);
	}
}

void Fullscreen(){
	keybd_event(VK_MENU, 0x38, 0, 0);keybd_event(VK_RETURN, 0x1c, 0, 0);keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
	return;
}

void optiones(int seleccion){
	float As;
	clrscr();marco();
	if(seleccion>=1 && seleccion<=10){
		centrador(strlen((opciones[seleccion-1])+4));
		gotoxy(ColFinal,3);
		printf("%c %s %c",126,opciones[seleccion-1],126);
	}
	switch(seleccion){
		case 1:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=fabs(As);
			break;
		}
		case 2:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			if(As>0){
				As=sqrt(As);
			}else{
				printf("Error");
			}
			
			break;
		}
		case 3:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=exp(As);
			break;
		}
		case 4:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=log(As);
			break;
		}
		case 5:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=log10(As);
			break;
		}
		case 6:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=sin(As);
			break;
		}
		case 7:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=cos(As);
			break;
		}
		case 8:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=asin(As);
			break;
		}
		case 9:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=acos(As);
			break;
		}
		case 10:{
			gotoxy(26,25);printf("Ingrese su valor: ");scanf("%f",&As);
			As=atan(As);
			break;
		}
	}
	if(seleccion>=1 && seleccion<=10){
		gotoxy(26,30);printf("Resultado: %.2f",As);
		centrador(strlen("Oprime Cualquier tecla para continuar."));
		gotoxy(ColFinal,32);printf("Oprime Cualquier tecla para continuar.");getche();
	}
}

void centrador(int colEnviada){
	ColFinal = (160-colEnviada)/2;;
}

