// Cargar dos arreglos: uno con los nombres de los empleados de una empresa y otro con las horas trabajadas por estos empleados. Cada arreglo tendr� n elementos y el nombre en la posici�n i del primer arreglo, 
// se debe corresponder con el valor de horas trabajadas en la posici�n i del segundo arreglo (es decir: los elementos hom�logos de ambos vectores corresponden al mismo empleado). Se pide:
// a.	Mostrar el promedio de horas trabajadas.
// b.	Mostrar los nombres de las personas que trabajaron m�s horas que el promedio general.
// c.	Mostrar el nombre de la persona que m�s horas trabaj� y el nombre de la que menos trabaj�.
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int a;
	cout<<"ingrese la cantidad de empleados "<<endl;
	cin>>a;
	char empleados[a][15];
	float horas[a],promedio=0,mayor=0,menor=999999;

	for (int i=0;i<a;i++)
	{
		cout<<"ingrese el nombre del empleado "<<i+1<<endl;
		cin>>empleados[i];
		cout<<"ingrese la cantidad de horas trabajadas por ese empleado "<<endl;
		cin>>horas[i];
		promedio=promedio+horas[i];
	}
	cout<<"el promedio de horas trabajadas es: "<<promedio/a<<endl;
	cout<<"las personas que trabajaron mas que el promedio son: "<<endl;
	for (int i=0;i<a;i++)
	{
		if (horas[i]>(promedio/a))
		{
			cout<<empleados[i]<<endl;
		}		
    }
    
	for (int i=0;i<a;i++)
	{
		if(mayor<horas[i])
		{
			mayor=horas[i];
		}
	}
	for (int i=0;i<a;i++)
	{
		if(menor>horas[i])
		{
			menor=horas[i];
		}
	}
	
	
	for (int i=0;i<a;i++)
	{
		if(menor==horas[i])
		{
			cout<<"la persona que menos trabajo es "<<empleados[i]<<endl;
		}
	}
	
	for (int i=0;i<a;i++)
	{
		if(mayor==horas[i])
		{
			cout<<"la persona que mas trabajo es "<<empleados[i]<<endl;
		}
	}
}
