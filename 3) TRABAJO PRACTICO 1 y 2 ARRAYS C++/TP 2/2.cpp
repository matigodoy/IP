// Hacer un programa que permita obtener el módulo de un vector de n componentes de tipo float, 
// (el módulo de un vector es la raíz cuadrada de la suma de los cuadrados de sus componentes).

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	int a,i;
	cout<<"ingrese la cantidad de componentes "<<endl;
	cin>>a;
	float comp[a],resultado=0,suma=0; 
	
	for (i=0;i<a;i++)
	{
		cout<<"ingrese los componentes "<<endl;
		cin>>comp[i];
		suma=(pow(comp[i],2)+suma);
	}
	resultado=(sqrt(suma));
	cout<<"el modulo del vector es: "<<resultado<<endl;
}
