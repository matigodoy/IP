// En una votación estudiantil se necesita determinar cuál es el ganador de tres candidatos posibles. 
// Se tienen los datos siguientes: las cantidades de votos obtenidas por cada uno de los candidatos y los nombres de los candidatos. Se pide: 
// *La cantidad de votos obtenida por el ganador. Mostrar el nombre y la cantidad de votos. 
// *El porcentaje que significa la cantidad anterior sobre el total de votos 
// *El nombre del candidato con menor cantidad de votos 
// *La diferencia de votos entre la mayor cantidad y la menor cantidad de votos. 

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>


using namespace std;

void cargar();
string nombres,auxnom;
int cant[3],aux;

int main(){
	cargar();
	for(int i=0;i<3;i++){
		cout<<nombres[i]<<cant[i];
	}
	
	return 0;
}
void cargar(){
	cout<<"ingrese los nombres de los candidatos y la cantidad de votos obtenidos "<<endl;
	for(int i=0;i<3;i++){
		cin>>nombres[i];
		//cin.ignore(); fijarse en las librerias de convert
		cin>>cant[i];
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3+1;j++){
			
			if(cant[i]<cant[j]){
				aux=cant[i];       
				auxnom=nombres[i];
				cant[i]=cant[j];   
				nombres[i]=nombres[j];
				cant[j]=aux;   
				//nombres[j]= auxnom;
			}
		}
	}
}

