// Un comercio que trabaja con cuatro vendedores, decidió otorgar un premio especial a uno de ellos. 
// El premio se otorgará al vendedor que mayor importe de ventas haya realizado en el mes; y consistirá en el pago de una bonificación, igual al 10% del promedio de los importes vendidos en ese mes. 
//Hacer un programa que permita cargar los importes vendidos por cada vendedor, y determine cuál es el vendedor que recibirá el premio, y el monto de dicho premio. 

#include<iostream>
using namespace std;

float cargar();
float analisis(float a[4],float suma);
float a[4],suma=0;


int main(){
	cargar();
	analisis(a,suma);
	
	
	
	
	
	
	return 0;
}

float cargar(){
	for(int i=0;i<4;i++){
		cout<<"ingrese el total de importes vendidos del vendedor "<<i+1<<endl;
		cin>>a[i];
		suma=suma+a[i];
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4+1;j++){
			
			if(a[i]>a[j]){
				int aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
}
float analisis(float a[4],float suma){
	cout<<"el vendedor que se gano el premio es el que vendio $"<<a[0]<<endl;
	cout<<"el premio obtenido es $"<<(suma/4)*0.10<<endl;
	
	
	
	
}
