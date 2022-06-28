// Ingresar por teclado dos vectores, de longitudes n y m respectivamente. 
// Generar un tercer vector que contenga todos los valores que se encuentren repetidos en los dos vectores. 
// O sea, el nuevo vector debe contener todos los elementos que estando en uno de los vectores originales, estén también en el otro.
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n,m,z,mayor=0;
	cout<<"ingrese la longitud del primer vector "<<endl;
	cin>>n;
	cout<<"ingrese la longitud del segundo vector "<<endl;
	cin>>m;
	float vector1[n];
	float vector2[m];
	int vector[n+m];
	
	cout<<"ingrese los valores del primero vector"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>vector1[i];
	}
	
	cout<<"ingrese los valores del segundo vector"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>vector2[i];
	}
	
	if (n>=m)
	{
		mayor=n;
	}
	else
	{
		mayor=m;
	}
	for(int i=0;i<mayor;i++)
	{
		for(int j=0;j<mayor;j++)
		{
			if(vector1[i]==vector2[i])
			{
				vector[z]=vector1[i];
				z++;
			}
		}
	}
	cout<<"los valores que son iguales del vector 1 y vector 2 son: "<<endl;
	for(int i=0;i<z;i++)
	{
		cout<<vector[i]<<endl;
	}
}
