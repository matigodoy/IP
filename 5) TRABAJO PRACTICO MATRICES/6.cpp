// Dada una matriz cuadrada de orden n:
// a. Leer el orden de la matriz, y luego la matriz.   
// b. Calcular el promedio de los elementos ubicados por encima de la diagonal principal.
// c. Determinar el menor valor ubicado en la diagonal principal.
// d. Trasladar todos los elementos ubicados debajo de la diagonal, a un vector v.
// e. Mostrar la matriz, el promedio, el menor y el vector v.
#include<iostream>

using namespace std;

int cargar();
int analisis();
int mostrar();

int tam, a=0;
int f=2,c=2,mayor=0;
int numeros[50][50];
int promedio=0;
int cant_elementos=0;

int main(){
	cargar();
	analisis();
	mostrar();
	
	//muestra la matriz
	cout<<endl;
	cout<<"La matriz es: "<<endl;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			cout<<numeros[i][j]<<" | ";
		}
		cout<<"\n";
	}
    return 0;
}

int cargar(){
	//almacena el tamaño de la matriz
	cout<<"ingrese el orden de la matriz (cuadrada): "<<endl;
	cin>>tam;
	
	//almacenar elementos en la matriz
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			cout<<"digite por teclado el elemento ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
}

int analisis(){
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			for(int i=0+a;i<1+a;i++){
				for(int j=1+a;j<tam;j++){
					promedio=numeros[i][j]+promedio;  //sacamos la suma de la matriz triangular superior
					cant_elementos=cant_elementos+1;  //sacamos la cantidad de elementos de la matriz triangular superior
				}
			}
			a++;
		}	
	}
	
	//ordeno la matriz de mayor a menor
     for(int i=0; i<tam; i++)
     {
        for(int j=0; j<tam; j++)
        {
            for(int x=0; x<tam;x++)
            {
                for(int y=0; y<tam; y++)
                {
                    if(numeros[i][j]<numeros[x][y])
                    {
                        mayor=numeros[i][j];
                        numeros[i][j]=numeros[x][y];
                        numeros[x][y]=mayor;
                    }
 
                }
            }
         }
    }
}

int mostrar(){
	cout<<"Promedio del triangulo superior: "<<promedio/cant_elementos<<endl; //dividimos el resultado y obtenemos el promedio
	
	//imprimo el valor menor
    for(int i=0; i<1; i++){
        for(int j=0; j<1; j++){
        	if (i==j){
			cout<<"El valor menor de la diagonal principal es: "<<numeros[i][j];
			}
        }
    }
    
	//Trasladar todos los elementos ubicados debajo de la diagonal, a un vector v.
	int v[100];
	a=0;
	cout<<" "<<endl;
	cout<<"el vector v que contiene los elementos del triangulo inferior es: "<<endl;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			for(int i=1+a;i<tam;i++){
				for(int j=0+a;j<1+a;j++){
					cout<<numeros[i][j]<<",";	
				}
			}
			a++;
		}	
	}
}
