//Cargar por teclado una matriz cuadrada de elementos int, de orden n * n, y desarrollar las siguientes operaciones en ella:
//a. Acumular los elementos ubicados por encima de la diagonal principal.
//b. Trasladar los elementos de la diagonal principal a un vector v1 y poner en cero dichos elementos en la matriz.
//c. Trasladar los elementos pares ubicados debajo de la diagonal, a un vector v2.
//d. Mostrar la matriz, el acumulador y los vectores v1 y v2.

#include<iostream>

using namespace std;

int cargar();
int analisis();

int tam, numeros[50][50];

int main(){
	cargar();
	analisis();
	
	//muestra la matriz
	cout<<"la matriz cambiada es: "<<endl;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}

int cargar(){
	//almacena el tamaño de la matriz
	cout<<"ingrese el tamano de la matriz n*n "<<endl;
	cin>>tam;
	
	//almacenar los elementos en la matriz
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			cout<<"digite por teclado el elemento ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
	
}
int analisis(){
	//acumula los elementos del triangulo superior
	int acumulador[tam][tam],a=0;
	
	cout<<"el acumulador con los valores de los elementos del triangulo superior es: "<<endl;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			for(int i=0+a;i<1+a;i++){
				for(int j=1+a;j<tam;j++){
					acumulador[i][j]=numeros[i][j];
					cout<<" | "<<acumulador[i][j]<<" | ";//muestra el acumulador
				}
			}
			a++;
		}	
	}
	
	//copia los elementos, de la matriz, ubicados en la diagonal pricipal al vector v1
	int v1[tam];
	
	cout<<" "<<endl;
	cout<<"el vector v1 que contiene los elementos de la diagonal principar es: "<<endl;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(i==j){
				v1[i]=numeros[i][j];
				cout<<" | "<<v1[i]<<" | ";//muestra el vector v1
				numeros[i][j]=0;
			}
		}
	}
	
	//copia los elementos de la matriz ubicados en el triangulo inferior que sean pares a un vector v2
	int v2[50];
	a=0;
	
	cout<<" "<<endl;
	cout<<"el vector v2 que contiene los elementos del triangulo inferior con elementos pares es: "<<endl;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			for(int i=1+a;i<tam;i++){
				for(int j=0+a;j<1+a;j++){
					if (numeros[i][j] % 2 == 0){//solo copia los elementos pares
						v2[i]=(numeros[i][j]);
						cout<<" | "<<v2[i]<<" | ";//muestra el vector
					}
				}
			}
			a++;
		}	
	}
	cout<<endl;
}
