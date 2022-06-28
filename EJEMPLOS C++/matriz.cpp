// filas x columnas
// int numeros[2][3]= {{1,2,3},{4,5,6}}
#include<iostream>

using namespace std;

int main(){
	int filas, columnas;
	
	cout<<"ingrese la cantidad de filas ";
	cin>>filas;
	cout<<"ingrese la cantidad de columnas ";
	cin>>columnas;
	int numeros[filas][columnas], 
	
	//almacenar elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"digite un numero ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
	
	//mostrar matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";//salto de linea (para que se pongan los numeros de acuerdo a la fila
	}
	
	return 0;
}
