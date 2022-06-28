//Realizar las siguientes operaciones sobre una matriz A y otra B, ambas de orden m*n:
//a. Leer m y n.
//b. Poner en cero la matriz A, y leer la matriz B.
//c. Analizar cada valor de B: Si B[i][j] es impar, negativo o múltiplo de 10, dar al elemento A[i][j] el valor 1.En caso contrario, dar al A[i][j] el valor 7.
//d. Mostrar la matriz A.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//se declaran las funciones.
int cargar();
int mostrar();

//declaracion de variables
int numeros[50][50], filas, columnas,menor, i, j,A,B,v[50];

int main(){
	cargar();
	mostrar();

	return 0;
}

int cargar(){
//se pide el ingreso de los valores.
	cout<<"Ingresar el numero de filas "<<endl;
	cin>>filas;
	cout<<"Ingresar el numero de columnas "<<endl;
	cin>>columnas;
	cout<<"Ingresar un numero para la matriz A"<<endl;
	cin>>A;
	cout<<"Ingresar un numero para la matriz B"<<endl;
	cin>>B;

for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++){
		numeros[i][j] = A;
		}
	}
}

int mostrar(){
	//se muestra la matriz A.
		cout<<"La Matriz A es: "<<endl;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"-------------------------------------"<<endl;

	for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				numeros[i][j] = B;
			}
	}
	//se muestra la matriz B.
		cout<<"La Matriz B es:  "<<endl;
	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
		{
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;
	//se pone en 0 la matriz A y se lee la matriz B.
	cout<<"la Matriz A es 0 y B se mantiene igual: "<<endl;
	for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				numeros[i][j] = 0;
			}
	}
		cout<<"La Matriz A es:  "<<endl;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"-------------------------------------"<<endl;

	for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				numeros[i][j] = B;
			}
	}
		cout<<"La Matriz B es:  "<<endl;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"-------------------------------------"<<endl;
	cout<<"-------------------------------------"<<endl;

	cout<<"Si algun elemento de B es impar,negativo o multiplo de 10,se dara al elemento en A un valor de 1,de ser contrario,se dara al elemento en A un valor de 7."<<endl;

	for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(B%2==1 || B%10==0 || B<<0){
				numeros[i][j] = 1;
				}else{
				numeros[i][j] = 7;
				}
			}
	}
	//se muestra la matriz A final.
		cout<<"La Matriz A es: "<<endl;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"------------------------------------- "<<endl;
}
