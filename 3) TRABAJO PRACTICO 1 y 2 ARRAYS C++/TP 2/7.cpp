// Cargar un arreglo de n componentes num�ricos y determinar el mayor de los valores cargados indicando en qu� posici�n se encuentra en el vector.

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int a,mayor=0,pos=0;
	cout<<"ingrese el tama�o del vector "<<endl;
	cin>>a;
	int arreglo[a];
	for(int i=0;i<a;i++)
	{
		cout<<"ingrese los numeros "<<endl;
		cin>>arreglo[i];
	}
	for(int i=0;i<a;i++)
	{
		if (arreglo[i]>mayor)
		{
			mayor=arreglo[i];
			pos=i;
		}
	}
	cout<<"el mayor es: "<<mayor<<endl;
	cout<<"el mayor se encuentra en la pocicion "<<pos<<" del vector "<<endl;
	
}
