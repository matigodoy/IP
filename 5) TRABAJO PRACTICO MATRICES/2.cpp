// Desarrollar un programa que cargue una matriz de n * m elementos float y realice las siguientes operaciones:
// a. Asignar el valor 15.6 a la posición que se encuentra en la segunda fila, quinta columna. 
// b. Ingresar un número de fila y asignar en todas las posiciones de esa fila el valor 20. 
// c. Permutar la columna 2 con la 5. 
// d. Mostrar la matriz con todos los cambios realizados. 

#include<iostream>

using namespace std;

//declaracion de funciones
float cargar();
float analisis();

int filas, columnas,a; //declaracion de variables
float numeros[10][10];//declaracion de matriz

int main(){
	cargar();
	analisis();
	
	//muestra la matriz
	cout<<"la matriz cambiada es: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}

float cargar(){
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
	
	//ingresa la fila donde se va cambiar los elementos por 20
	cout<<"ingrese por teclado la fila a la que quieres cambiar todos los elementos por 20 "<<endl;
	cin>>a;
}

float analisis(){
	//cambia los elementos a 20 de la fila seleccionada
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			numeros[a-1][j]=20;
		}
	}
	
	numeros[1][4]=15.6; //le asigna 15.5 al elemeno de la 2da fila - 5ta columna
	
	//intercambia columna 2 por columna 5
	float columna2[filas][0];
	
	for(int i=0;i<filas;i++){
		columna2[i][0]=numeros[i][1];
		numeros[i][1]=numeros[i][4];
		numeros[i][4]=columna2[i][0];
	}
}
