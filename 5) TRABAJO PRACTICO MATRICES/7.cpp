//Dada una matriz a de orden m x n, y otra b de orden n x s, hacer un programa que efectúe el producto de ambas matrices. 
//Muestre la matriz producto

#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

//se decalran las funciones.
int cargar();
int mostrar();

//se declaran los valores.
int A[20][20], B[20][20], C[20][20];
int m, n, s;

int main(){
	cargar();
	mostrar();
	
	return 0;
}
int cargar(){
	//se ingresan los valores de las matrices.
    cout<<"ingrese la cantidad de filas de la matriz A: ";
	cin>>s;
    cout<<"ingrese la cantidad de columnas de la matriz A: "; 
	cin>>m;
    cout<<endl;
    for(int i=0; i<s; ++i){
        for(int j=0; j<m; ++j){
            cout<<"Ingresar el valor de la matriz A ["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }

    cout<<"la cantidad de filas de la matriz B: "<<m<<endl;
    cout<<"ingrese la cantidad de columnas de la matriz B: "; cin>>n;
    cout<<endl;
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            cout<<"Ingresar el valor de la matriz B ["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }
    }
}
int mostrar(){
    //se inica una matriz C.
    for(int i=0; i<s; ++i){
        for(int j=0; j<n; ++j){
            C[i][j] = 0;
        }
    }

    //se genera la matriz C.
    for(int i=0; i<s; ++i){
        for(int j=0; j<n; ++j){
            for(int z=0; z<m; ++z){
                C[i][j] += A[i][z] * B[z][j];
            }
        }
    }
    
	//se muestran los valores de la matriz A.
    cout<<"Matriz A: "<<endl;
    for(int i=0; i<s; ++i){
        for(int j=0; j<m; ++j){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
	//se muestran los valores de la matriz B.
    cout<<"Matriz B: "<<endl;
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
	//se muestra el producto de las matrices A y B.
    cout<<"Matriz C: "<<endl;
    for(int i=0; i<s; ++i){
        for(int j=0; j<n; ++j){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
