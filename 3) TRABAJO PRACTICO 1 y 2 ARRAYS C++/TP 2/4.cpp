// Desarrollar un programa que cargue un vector a de n elementos numéricos, 
// y que luego cree un vector b que sea igual que el vector a pero con sus elementos invertidos.

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int a;
	cout<<"ingrese la cantidad de numeros "<<endl;
	cin>>a;
	int arreglo[a];
	cout<<"cargue los valores del arreglo "<<endl;
	for(int i=0;i<a;i++)
	{
		cin>>arreglo[i];
	}
	
	
	cout<<"el arreglo inverso es: "<<endl;
	for(int i=a-1;i>=0;i--)
	{
		cout<<arreglo[i]<<endl;
	}
	
	
}
