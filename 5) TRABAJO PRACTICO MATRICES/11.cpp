// Realizar las siguientes operaciones sobre una matriz cuadrada B, de orden n:
// a. Leer el valor de n y la matriz B.
// b. Hallar los dos elementos de B de mayor valor absoluto (a1, a2) e intercambiar las columnas donde se
// encuentren. En caso que estén en la misma columna, muestre un mensaje aclaratorio.
// c. Determinar el elemento b1 de menor valor absoluto por debajo de la diagonal principal y mostrar la fila y
// la columna que contiene a b1.
// d. Mostrar a1, a2, y la matriz B.

#include<iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//declaracion de funciones
int cargar();
int mostrar();

//declaracion de variables
float B[50][50];
int n,mayor,mayor2,absoluto,a1,a2,B1,menor,in;

int main(){
	cargar();
	mostrar();
	return 0;
}
int cargar (){ 
	//el usuario ingresa el orden de la matriz
	cout<<"ingrese el orden de la matriz (cuadrada): ";
	cin>>n;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"digite por teclado el elemento ["<<i<<"]["<<j<<"]: "; 
			cin>>B[i][j];
		}
	}
	//calcula los dos elementos de B de mayor valor absoluto
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			absoluto = abs(B[i][j]);
			if(absoluto>mayor){
				mayor2=mayor;
				mayor=B[i][j];
			}
			else 
			 if(B[i][j]>mayor2){
				mayor2=B[i][j];
			}
		}
	}	
	for(int i=0;i<n;i++){  
		for(int j=0;j<n;j++){
			if (B[i][j]==mayor){
				a1=j;
			}
			else if (B[i][j]==mayor2){
				a2=j;
			}
		}
	}
	//Si a1 es igual que a2, decimos que los dos valores mayores están en la misma columna
	if(a1==a2){
		cout<<"LOS DOS VALORES MAYORES SE ENCUENTRAN EN LA MISMA COLUMNA. " << endl;
	}
	else if (a1!=a2){
		int aux=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				aux= B[i][a1];
				B[i][a1]=B[i][a2];
				B[i][a2]=aux;
			}
		}
		cout <<"La matriz con el intercambio de columna: "<< endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<B[i][j] <<" ";
			}
			cout << endl;
		}
	}	
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			absoluto = abs(B[i][j]);
			if(absoluto<menor){
				menor=B[i][j];
				in=i;
			}
		}
	}
	for (int i=0;i<n;i++){
 		for (int j=0;j<n;j++){
 			if(B[i][j]==menor){
		    	 B1=j;
			}	
		}
	}

return 0;
}
int mostrar(){
	//Mostramos los resultados finales
 	cout<<"EL ELEMENTO B1 DE MENOR VALOR ABSOLUTO POR DEBAJO DE LA DIAGONAL PRINCIPAL: "<<menor<<" EN LA COLUMNA "<<B1<< ", FILA: "<<in<<endl;
 	cout<<"EL PRIMER ELEMENTO DE MAYOR VALOR ABSOLUTO DE LA MATRIZ ES: "<<mayor<< endl;
	cout<<"EL SEGUNDO ELEMENTO CON MAYOR VALOR ABSOLUTO DE LA MATRIZ ES: "<<mayor2<<endl;

	cout<<"LA MATRIZ B ES: "<<endl;
	//Hacemos for para mostrar la matriz
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
system ("pause");
}
