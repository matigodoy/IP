// Desarrollar un programa que permita obtener el mayor elemento de una matriz de n * m elementos, y muestre la posici�n que ocupa dentro de la matriz 
// (es decir, muestre el n�mero de fila y el n�mero de columna de ese elemento).

#include<iostream>

using namespace std;

//declaracion de funciones
float cargar();
float analisis();

//declaracion de variables
float numeros[50][50];
int filas, columnas,a,b,mayor;

int main(){
	cargar();
	analisis();
	
    //muestro el numero mayor
    cout<<"el elemento mayor es: "<<mayor<< " ubicado en la pocicion "<< "["<<a<<"]["<<b<<"]";
	
	return 0;
}

float cargar(){
	//carga el tama�o de la matriz
	cout<<"ingrese por teclado la cantidad de filas de la matriz ";
	cin>>filas;
	cout<<"ingrese por teclado la cantidad de columnas de la matriz ";
	cin>>columnas;
		
	//almacenar elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"digite por teclado el elemento ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
}

float analisis(){
	//saca el elemento mayor de la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){		
			if(mayor<numeros[i][j]){
				mayor=numeros[i][j];
				a=i;
				b=j;
			}
		}
	}
}
