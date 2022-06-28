#include <winbgim.h>
#include<iostream>

using namespace std;

void menu();
void ejercicos();

int main(){
	menu();
	ejercicos();
	return 0;
}

void menu(){
initwindow(1300,700); // Abre una ventana gráfica

moveto(0,0); // Pone el cursor en 0,0
settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);//TIPO Y TAMAÑO DE LETRA
outtextxy(350,150," BIENVENIDO AL PARCIAL 5 ");//MUESTRA EL MENSAJE EN PANTALLA
rectangle(450,250,850,510);//MUESTRA UN RECTANGULO
moveto(650,250);
lineto(650,500);

moveto(470,280);
lineto(630,280);
moveto(470,310);
lineto(630,310);
moveto(470,340);
lineto(630,340);
moveto(470,370);
lineto(630,370);
moveto(470,400);
lineto(630,400);
moveto(470,430);
lineto(630,430);
moveto(470,460);
lineto(630,460);
moveto(470,490);
lineto(630,490);

moveto(670,280);
lineto(830,280);
moveto(670,310);
lineto(830,310);
moveto(670,340);
lineto(830,340);
moveto(670,370);
lineto(830,370);
moveto(670,400);
lineto(830,400);
moveto(670,430);
lineto(830,430);
moveto(670,460);
lineto(830,460);
moveto(670,490);
lineto(830,490);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);//TIPO Y TAMAÑO DE LETRA
outtextxy(370,600," PRESIONA UNA TECLA PARA CONTINUAR ");//MUESTRA EL MENSAJE EN PANTALLA
while(!kbhit()); // Espera a que el usuario presione una tecla
cleardevice(); //borra todo lo que tenemos en pantalla

moveto(0,0);
settextstyle(SMALL_FONT, HORIZ_DIR, 10);//TIPO Y TAMAÑO DE LETRA
outtextxy(500,100," PARCIAL 5 ");//MUESTRA EL MENSAJE EN PANTALLA

settextstyle(SMALL_FONT, HORIZ_DIR, 7);//TIPO Y TAMAÑO DE LETRA
outtextxy(300,200," EJERCICIO 11 ");//MUESTRA EL MENSAJE EN PANTALLA
settextstyle(SMALL_FONT, HORIZ_DIR, 7);//TIPO Y TAMAÑO DE LETRA
outtextxy(300,250," EJERCICIO 12 ");//MUESTRA EL MENSAJE EN PANTALLA
settextstyle(SMALL_FONT, HORIZ_DIR, 7);//TIPO Y TAMAÑO DE LETRA
outtextxy(300,300," EJERCICIO 13 ");//MUESTRA EL MENSAJE EN PANTALLA
settextstyle(SMALL_FONT, HORIZ_DIR, 7);//TIPO Y TAMAÑO DE LETRA
outtextxy(300,350," EJERCICIO 14 ");//MUESTRA EL MENSAJE EN PANTALLA
settextstyle(SMALL_FONT, HORIZ_DIR, 7);//TIPO Y TAMAÑO DE LETRA
outtextxy(300,400," EJERCICIO 15 ");//MUESTRA EL MENSAJE EN PANTALLA
settextstyle(SMALL_FONT, HORIZ_DIR, 7);//TIPO Y TAMAÑO DE LETRA
outtextxy(300,450," EJERCICIO 16 ");//MUESTRA EL MENSAJE EN PANTALLA
settextstyle(SMALL_FONT, HORIZ_DIR, 7);//TIPO Y TAMAÑO DE LETRA
outtextxy(300,500," EJERCICIO 17 ");//MUESTRA EL MENSAJE EN PANTALLA
settextstyle(SMALL_FONT, HORIZ_DIR, 6);//TIPO Y TAMAÑO DE LETRA
outtextxy(520,620," INGRESE EL NUMERO DEL EJERCICIO ");//MUESTRA EL MENSAJE EN PANTALLA
outtextxy(5,5," ");//MUESTRA EL MENSAJE EN PANTALLA
Sleep(7000);
closegraph(); // Cierra la ventana gráfica
}

void ejercicos(){
	int a;
	cout<<"INGRESE EL NUMERO DEL EJERCICO "<<endl;
	cin>>a;
	do{
		if(a<11 || a>17){
		cout<<"NO ESTA ESE EJERCICIO, SOLO SE PUEDE DEL EJERCIO 11 AL 17 "<<endl;
		cin>>a;
		}
	}
	while(a<11 || a>17);
	
	if(a==11){
		system("cls");
		cout<<"INGRESO AL EJERCICIO 11 "<<endl;
	}
	if(a==12){
		system("cls");
		cout<<"INGRESO AL EJERCICIO 12 "<<endl;
	}
	if(a==13){
		system("cls");
		cout<<"INGRESO AL EJERCICIO 13 "<<endl;
	}
	if(a==14){
		system("cls");
		cout<<"INGRESO AL EJERCICIO 14 "<<endl;
	}
	if(a==15){
		system("cls");
		cout<<"INGRESO AL EJERCICIO 15 "<<endl;
	}
	if(a==16){
		system("cls");
		cout<<"INGRESO AL EJERCICIO 16 "<<endl;
	}
	if(a==17){
		system("cls");
		cout<<"INGRESO AL EJERCICIO 17 "<<endl;
	}
}
