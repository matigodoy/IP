// Cargar un arreglo con las alturas de los n alumnos de un curso (el valor de n también se carga por teclado). 
// Determinar la media y luego informar cuántos alumnos son más altos que la media y cuántos son más bajos.

#include<iostream>

using namespace std;

int main()
{
	int n,media1=0,media0=0;
	
	cout<<"ingrese la cantidad de alunos del curso "<<endl;
	cin>>n;
	
	float altura[n],suma=0,promedio=0;
	
	for(int i=0;i<n;i++)
	{
		cout<<"ingrese la altura "<<endl;
		cin>>altura[i];
		suma=suma+altura[i];
	}
	
	promedio=suma/n;
	
	cout<<"la media de las alturas es : "<<promedio<<endl;
	
	for(int i=0;i<n;i++)
	{
		if(altura[i]>(promedio))
		{
			media1=media1+1;
		}
		if(altura[i]<(promedio))
		{
			media0=media0+1;
		}
	}
	cout<<"la cantidad de alturas por encima de la media son: "<<media1<<endl;
	cout<<"la cantidad de alturas por debajo de la media son: "<<media0<<endl;
	
	
}

