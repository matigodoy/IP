//Hacer un programa que obtenga la suma de los elementos ubicados en el contorno de una matriz de n filas y m columnas.
#include<iostream>

using namespace std;

int cargar();//declaracion de la funcion

int filas, columnas, suma; //declaracion de variables a usar

int main(){
	cargar();//usa la funcion cargar
	//mostrar la variable suma
	cout<<"La suma total de los elementos es: "<<suma<<endl;
	return 0;
}

int cargar(){
	//carga el usuario el tamaño de la matriz
	cout<<"ingrese con el teclado la cantidad de filas de la matriz ";
	cin>>filas;
	cout<<"ingrese con el teclado la cantidad de columnas de la matriz ";
	cin>>columnas;
	
	int numeros[filas][columnas]; //declaracion de la matriz
	
	//almacenar elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"digite con el teclado el elemento ["<<i<<"]["<<j<<"] ";
			cin>>numeros[i][j];
			suma = numeros[i][j]+suma; //contador de suma de los elementos
		}
	}
	
	return suma;
}
