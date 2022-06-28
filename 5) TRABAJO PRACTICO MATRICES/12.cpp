//Cargar una matriz de n filas y m columnas, en donde cada fila representa un corredor en una carrera, 
//y cada columna representa una de las vueltas de esa carrera (desde 0 a m-1). 
//Cada componente de la matriz representa el tiempo empleado por el corredor representado por la fila, 
//para terminar la vuelta representada por la columna. Si algún corredor abandonó, en esa vuelta tendrá un tiempo cero y también en todas las posteriores.
//Se pide:
//a. Dar un listado por pantalla, en donde se indique el tiempo total de cada corredor.
//b. Determinar cuantos corredores abandonaron la carrera.
//c. Determinar cuál fue el corredor que ganó la carrera.

#include<iostream>

using namespace std;

//declaracion de matrices
float cargar();
float analisis();
float mostrar();

//declaracon de variables
int corredores,vueltas,b;
float tiempo[50][50],tiempototal[50];

int main(){
	cargar();
	analisis();
	mostrar();
	
	return 0;
}

float cargar(){
	//se ingresa el tamaño de la matriz
	cout<<"ingrese por teclado la cantidad de corredores ";
	cin>>corredores;
	cout<<"ingrese por teclado la cantidad vueltas que incluye la carrera ";
	cin>>vueltas;
	
	//almacenar elementos en la matriz
	for(int i=0;i<corredores;i++){
		for(int j=0;j<vueltas;j++){
			cout<<"digite por teclado el tiempo del corredor "<<i+1<<" de la vuelta "<<j+1<<": ";
			cin>>tiempo[i][j];
		}
	}
}

float analisis(){
	//guarda en un vector el tiempo total de cada corredor
	for(int i=0;i<corredores;i++){
		for(int j=0;j<vueltas;j++){
			tiempototal[i]=tiempototal[i]+tiempo[i][j];
		}
	}
	
	//determina cual fue el corredor con menor tiempo
	float a=999;
	for(int i=0;i<corredores;i++){
		if(tiempototal[i]!=0){
			if(a>tiempototal[i]){
				a=tiempototal[i];
				b=i;
			}
		}
	}
}

float mostrar(){
	//muestra el tiempo total de cada corredor
	for(int i=0;i<corredores;i++){
		cout<<"el tiempo total del corredor "<<i+1<<" es: "<<tiempototal[i]<<endl;
	}
	
	//muestra al corredor con menor tiempo
	cout<<"el corredor "<<b+1<<" gano la carrera "<<endl;
}
