// En un colegio secundario se maneja la información de las notas de un curso, con tres arreglos de longitud n, llamados trim1, trim2 y trim3.  
// Los componentes de los arreglos son las notas del primero, segundo y tercer cuatrimestre respectivamente, para cada alumno. 
// Generar un cuarto arreglo de nombre prom, en el que cada componente sea el promedio de los elementos homólogos de los tres arreglos originales. 
// Mostrar los tres mejores promedios del curso. 

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int a,alum;
	cout<<"ingrese la cantidad de alumnos "<<endl;
	cin>>a;
	int n;
	cout <<"ingrese la cantidad de notas de los trimestres "<<endl;
	cin>>n;
	float trim1[n];
	float trim2[n];
	float trim3[n];
	float prom[n*3];
	float promediototal=0,promediomayor=0;
	do
	{
		alum=alum+1;
		float sumaprom=0;
		cout<<"ingrese las notas del primer tirmestre "<<endl;
		for (int i=0;i<n;i++)
		{
			cin>>trim1[i];
		}
		cout<<"ingrese las notas del segundo tirmestre "<<endl;
		for (int i=0;i<n;i++)
		{
			cin>>trim2[i];
		}
		cout<<"ingrese las notas del tercer tirmestre "<<endl;
		for (int i=0;i<n;i++)
		{
			cin>>trim3[i];
		}
		
		for(int i=0;i<n;i++)
		{
			prom[i]=trim1[i]/3;
		}
		for(int i=n;i<(n*2);i++)
		{
			prom[i]=trim2[i-n]/3;
		}
		for(int i=(n*2);i<(n*3);i++)
		{
			prom[i]=trim3[i-(n*2)]/3;
		}
		
		for (int i=0;i<n*3;i++)
		{
			sumaprom=sumaprom+prom[i];
		}
		promediototal=sumaprom/(n*3);
		cout<<"el promedio es "<<promediototal<<endl;
		if (promediomayor<promediototal)
		{
			promediomayor=promediototal;
		}
	}
	while (alum!=a);
	cout<<"el promedio mayor es: "<<promediomayor<<endl;
}
