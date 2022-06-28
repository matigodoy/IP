//Dados cuatro números distintos, mostrarlos ordenados de menor a mayor

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>
#include<cstdlib>
#include <limits>
#include <string.h>
using namespace std;
void carguenum();
void calculo();
void ordenamiento();
float e1[4];

int main(){
	carguenum();
	calculo();
	ordenamiento();
	return 0;
}
void carguenum(){
	cout<<"Ingresa cuatro numeros: "<<endl;
	cout<<" "<<endl;
	cout<<">> ";
	for(int i=0;i<4;i++){
		cin>>e1[i];
	}
}
void calculo(){
	for(int i=0;i<4;i++){
		for(int j=0;j-i<4;j++){
			if(e1[i]<e1[j]){
				int aux=e1[i];
				e1[i]=e1[j];
				e1[j]=aux;
			}
		}
	}
}
void ordenamiento(){
	cout<<"Los numeros ordenados son: "<<endl;
	for(int i=0;i<4;i++){
		cout<<e1[i]<<endl;
	}
}
