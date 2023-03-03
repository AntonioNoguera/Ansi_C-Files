//Programa 1.7.5
//Temporizador xd
#include <Windows.h>

#include<stdio.h>
#include<conio2.h>
#include<time.h>

int h,m,s;

main(){
	gotoxy(1,2);
	printf("Ingrese las horas deseadas: ");
	scanf("%d",&h);
	gotoxy(35,2);
	printf("Ingrese los minutos deseados: ");
	scanf("%d",&m);
	gotoxy(72,2);
	printf("Ingrese los segundos deseados: ");
	scanf("%d",&s);
	
	for(;s>=0; s=s-1){
		gotoxy(50,6);
		printf("%d h : %d m : %d s",h,m,s);
		
		
		Sleep(1000);
			if(m!=0 && s==0){
				m=m-1;
				s=60;
			}else if(h!=0 && m==0 && s==0){
				h=h-1;
				m=59;
				s=60;
			}else if(h==0 && m==0 && s==0){
				s=0;
				
			}
		clrscr();
	}
	gotoxy(50,6);
	printf("%cTiempo Concluido!",173);
	gotoxy(40,8);
	printf("Presiona cualquier boton para continuar.");
	Beep(500,8000);
					
	getche();
}
