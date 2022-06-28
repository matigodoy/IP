//Desarrollar un programa para realizar las siguientes operaciones en una matriz x de orden m*n:
//a. Leer el orden de x (o sea, leer m y n) y luego leer la matriz x.
//b. Mostrar la matriz.
//c. Determinar el elemento de la primera columna que tenga el mayor valor absoluto, y asignar en L, el número de fila de dicho elemento.
//d. Determinar el elemento de menor valor absoluto de la fila L, y asignar en K el número de columna de dicho elemento.
//e. Intercambiar la fila 1 con la fila L.
//f. Intercambiar la columna 1 con la columna K.
//g. Mostrar la matriz cambiada.

#include<iostream>

using namespace std;

//declaracion de funciones
int cargar();
int analisis();

//declaracion de variables a usar
int filas, columnas;
int numeros[50][50];

int main(){
	cargar();
	
	//se muestra la matriz original
	cout<<"la matriz original es: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" | "<<numeros[i][j]<<" | ";
		}
		cout<<"\n";
	}
	
	analisis();
	
	//se muestra la matriz cambiada.
	cout<<"la matriz cambiada es: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" | "<<numeros[i][j]<<" | ";
		}
		cout<<"\n";
	}
	
	return 0;
}

int cargar(){
	//alamcena el tamaño de la matriz
	cout<<"ingrese con el teclado la cantidad de filas de la matriz ";
	cin>>filas;
	cout<<"ingrese con el teclado la cantidad de columnas de la matriz ";
	cin>>columnas;
	
	//almacenar elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"digite con el teclado el elemento ["<<i<<"]["<<j<<"] ";
			cin>>numeros[i][j];
		}
	}
	
}

int analisis(){
	//se le asigna a la variable l el numero de fila del elemento de mayor valor absoluto de la primera columna.
	int primcol[filas],a,l;
	for(int i=0;i<filas;i++){
		for(int j=0;j<1;j++){
			if(numeros[i][j]<0){
				primcol[i]=numeros[i][j]*-1;
			}
			if(numeros[i][j]>=0){
				primcol[i]=numeros[i][j];
			}
			if(a<primcol[i]){
				a=primcol[i];
				l=i;
			}
		}
	}
	
	//se le asigna a la variable k el numero de columna del elemento de menor valor absoluto de la fila l.
	int filal[columnas],b=99999,k;
	for(int i=l;i<l+1;i++){
		for(int j=0;j<columnas;j++){
			if(numeros[i][j]<0){
				filal[j]=(numeros[i][j])*-1;
			}
			if(numeros[i][j]>=0){
				filal[j]=numeros[i][j];
			}
			if(b>filal[j]){
				b=filal[j];
				k=j;
			}
		}
	}
	
	//intercambia la fila 1 con la l
	int fila1[0][columnas];
	for(int j=0;j<columnas;j++){
		fila1[0][j]=numeros[0][j];
		numeros[0][j]=numeros[l][j];
		numeros[l][j]=fila1[0][j];
	}
	
	//intercambia la columna 1 con la k
	int columnak[filas][0];
	for(int i=0;i<filas;i++){
		columnak[i][0]=numeros[i][0];
		numeros[i][0]=numeros[i][k];
		numeros[i][k]=columnak[i][0];
	}
	
}
