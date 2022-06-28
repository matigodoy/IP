#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <limits>
using namespace std;

void cargar();
void mostrar();

int vendedores,articulos;
float cantidad[50][50],precio[50][50],sumaarticulos[50],sumavendedores[50];

int main (){
	cargar();
	mostrar();
}

void cargar(){
	cout<<"ingrese por teclado la cantidad de vendedores: "<<endl;
	cin>>vendedores;
	cout<<"ingrese por teclado la cantidad de articulos: "<<endl;
	cin>>articulos;
	
	for(int i=0;i<vendedores;i++){
		for(int j=0;j<articulos;j++){
			cout<<"digite por teclado la cantidad vendida del vendedor "<<i+1<<" del articulo "<<j+1<<" : "<<endl;
			cin>>cantidad[i][j];
			sumaarticulos[i] = sumaarticulos[i] + cantidad[i][j];
		}
	}
	
	for(int i=0;i<vendedores;i++){
		for(int j=0;j<articulos;j++)
		{
			cout<<"digite por teclado el importe del vendedor "<<i+1<<" del articulo "<<j+1<<" : "<<endl;
			cin>>precio[i][j];
			sumavendedores[j] = sumavendedores[j] + precio[i][j];
		}
	}
}

void mostrar(){
	cout<<"      listado de importes por articulo "<<endl;
			cout<<"articulo            importe facturado "<<endl;
	for(int i=0;i<vendedores;i++){
		for(int j=0;j<articulos;j++){
			cout<<j+1<<"                       "<<sumaarticulos[i]<<endl;
		}
	}
	cout<<"      listado de cantidades por vendedor "<<endl;
			cout<<" vendedor           cantidad de articulos vendida "<<endl;
	for(int i=0;i<vendedores;i++){
		for(int j=0;j<articulos;j++){
			cout<<i+1<<"                       "<<sumavendedores[j]<<endl;
		}
	}
}
