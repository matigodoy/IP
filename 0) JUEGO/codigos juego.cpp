//ordenamiento de palabras
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>
#include<cstdlib>
#include <limits>
#include <string.h>
using namespace std;

char e1[4][10],temp[10];

int main(){
	cout<<"CUANDO VUELVES AL REFUJIO, TE PONES A PENSAR EN LO SOLO QUE TE ENCUENTRAS Y QUE NECESITAS ALGUNA COMPAÑIA "<<endl;
	cout<<"ENTONCES SE TE OCURRE HACERTE AMIGO DE UNAS PIEDRAS. "<<endl;
	cout<<"UNA VEZ DECORADAS TIENES QUE ELEJIR LOS NOMBRES DE LAS 4 PIEDRAS "<<endl;
	
	for(int i=0;i<4;i++){
		cin>>e1[i];
	}
	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			if(strcmp(e1[i],e1[j])>0){
				strcpy(temp,e1[i]);
				strcpy(e1[i],e1[j]);
				strcpy(e1[j],temp);
			}
		}
	}
	cout<<"LOS NOMBRES ORDENADOS SON "<<endl;
	for(int i=0;i<4;i++){
		cout<<e1[i]<<endl;
	}
	
	return 0;
}




//PELEA ANIMAL
cout<<"ELIJA LA CANTIDAD DE GOLPES QUE LE VA A DAR AL ANIMAL. (TIENE 3 INTENTOS PARA DERROTARLO)"<<endl;
	cin>>f;
	do
	{
		cin>>f;
		e=e+1;
		if (f<50)
		{
			cout<<"NECESITAS MAS GOLPES"<<endl;
		}
	}
		while (f< 49 || e==3); //no corta con el contador pegadas
		
	if (f>49)
	{
		cout<<"FELICITACIONES, LO HAS DERROTADO"<<endl;
	}
	else{
		cout<<" "<<endl;
		cout<<"TE FALTO FUERZA, EL ANIMAL A HUIDO. TIENES PROBABILIDAD DE MORIR DE HAMBRE"<<endl;
	}
	
	
	
	
	//pelea con los canguros.
	cout<<"han pasado tres meses , te crece la barba y la falta de comunicacon te esta volviendo loco "<<endl;
	cout<<"en todo este tiempo, pudiste hacerte un mejor refugio, con abundantes cantidades de agua y comida "<<endl;
	cout<<"en una de las busquedas por comida descubriste a lo lejos una puerta oculta, donde parece que vive una manada de canguros "<<endl;
	cout<<"en este momento salis a investigar en que consiste esa puerta. Una vez llegado al lugar tenes dos opciones "<<endl;
	cout<<"ingresas al lugar peleando con los canguros (precione 1). O ver si existe otra  entrada (precione 2) "<<endl;
	cin>>g;
	system("cls");
	if (g==1)
	{
		cout<<"el lider de la manada te desafia un combate para demostrar que es su terreno "<<endl;
		cout<<"comienza la pelea, hasta que tienes dos oportunidades de meterle un numero de hachazos en la cabeza "<<endl;
		cout<<"elije la cantidad de hachazos que le pegas al canguro "<<endl;
		cin>>h;
		system("cls");
		if (h<100)
		{
			cout<<"tienes una oportunidad mas "<<endl;
			cin>>h;
		}
		if (h>99)
		{
			
			
			
			//abrir puerta con palancas.
			cout<<"lo has derrotado, ahora ese terreno es tuyo "<<endl;
			cout<<"una vez llegada a la puerta descubres que hay una serie de palancas para abrirla "<<endl;
			cout<<"tienes que activar una de esas palancas para que se te abra la puerta "<<endl;
			cout<<"si quieres activar la primera palanca (presionar 1), segunda palanca (presionar 2), tercera palanca (presionar 3) o cuarta palanca (presionar 4) "<<endl;
			cin>>i;
			system("cls");
			if (i==4)
			{
				cout<<"abriste la puerta e ingresaste al lugar misterioso "<<endl;
			}
			else
			{
				cout<<"no era la palanca correcta "<<endl;
			}
		}
		if (h<100)
		{
			cout<<"el canguro te ha ganado la batalla, vas a tener que buscar otra forma de entrar "<<endl;
		}
	}
	if (g==2 || h<100 || i!=4)
	{
		cout<<"has  encontrado una piedra rota donde puedes ingresar al lugar "<<endl;
		cout<<"pero tienes que buscar alguna forma de hacer mas grande el hueco porque no entras "<<endl;
		cout<<"tienes la opcion de intentar mover la piedra con un toronco que encontraste ahi (ingrese 1). O puedes ir a buscar alguna herramienta a tu refujio (ingresee 2) "<<endl;
		cin>>j;
		system("cls");
		if (j==1)
		{
			cout<<"con el tronco has podido mover la piedra ingresando al lugar misterioso "<<endl;
		}
		if (j==2)
		{
			cout<<"has vuelto al refugio y se te hizo de noche, vas a tener que esperar al amanecer "<<endl;
			cout<<"al amanecer regresas al lugar y pudes deshacerte de esa roca, ingresando al lugar misterioso "<<endl;
		}
	}
	
	
	
	
	
	//arreglo acertijo
	int k,m=0,n;
	const int l=5;
	cout<<"CAPITULO 2 "<<endl;
	cout<<"UNA VEZ INGRESADO AL LUGAR NO CONOCIDO, TE ENCUENTRAS EN EL FRENTE UNA ESCULTURA DONDE CONTIENE UN ACERTIJO "<<endl;
	cout<<"EN LA ESTATUA HAY UN TECLADO PARA INGRESAR NUMEROS "<<endl;//hacer un funcion de int cargar(para que no se puedan ingresar numeros mayores a 10)
	do
	{
	cout<<"UTILIZA TU TECLADO PARA INGRESAR LOS NUMEROS "<<endl;
		int k[l];
		for(int i=0;i<l;i++)
		{
			cin>>k[i];
			m=m+k[i];//agregar de que no se puedan ingresar dos numeros iguales
		}
		if(m>50 && m<100)
		{
			cout<<"TOTAL DE LA SUMA "<<m<<endl;
			cout<<"FELICITACIONES, HAS PODIDO RESOLVER EL ACERTIJO "<<endl;
		}
		if(m<50 || m>100)
		{
			cout<<"TOTAL DE LA SUMA "<<m<<endl;
			cout<<"EL RESULTADO NO ES EL CORRECTO. PERO HAS DESCUBIERTO DE QUE LOS NUMEROS QUE INGRESAS LOS SUMAN Y NO FUE EL RESULTADO NECESARIO. QUIERES REPETIR? (precione 1 para si y 0 para no) "<<endl;
			cin>>n;
		}
	}
	while (n!=0 || m<50);
	cout<<"Continuara..."<<endl;
}
