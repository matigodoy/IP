//Cargar por teclado una matriz cuadrada de elementos int, de orden n * n, y desarrollar las siguientes operaciones en ella:
//a. Acumular los elementos ubicados por encima de la diagonal principal.
//b. Trasladar los elementos de la diagonal principal a un vector v1 y poner en cero dichos elementos en la matriz.
//c. Trasladar los elementos pares ubicados debajo de la diagonal, a un vector v2.
//d. Mostrar la matriz, el acumulador y los vectores v1 y v2.

#include<iostream>

using namespace std;

int main(){
	int tam;
	
	//almacena el tamaño de la matriz
	cout<<"ingrese el tamaño de la matriz n*n "<<endl;
	cin>>tam;
	
	int numeros[tam][tam],a=0;
	
	//almacenar elementos en la matriz
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			cout<<"digite por teclado el elemento ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			
			for(int i=0+a;i<1+a;i++){
				for(int j=1+a;j<tam;j++){
					cout<<numeros[i][j];
				}
				cout<<"\n";
			}
			a++;
		}	
	}
	
	return 0;
}
