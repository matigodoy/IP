// Una empresa dedicada a la emisi�n de una revista inform�tica desea conocer cierta informaci�n luego de haber lanzado una campa�a de promoci�n.  
// La empresa tiene n vendedores, los cuales realizan suscripciones de clientes. A cada vendedor le ser� otorgado un 2% sobre el monto de cada una de las suscripciones que haya concretado. 
// El monto de las suscripciones es �nico y debe ingresarse como dato. El programa a realizar deber� manejar un arreglo cant de n componentes, donde cada casilla se use para almacenar la cantidad de suscripciones realizadas por cada vendedor. 
// Calcular el porcentaje resultante para cada vendedor y almacenarlo en otro vector porc. Mostrar los porcentajes de los 5 vendedores que menos percibieron.
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	int a,b;
	cout<<"ingrese la cantidad de vendedores "<<endl;
	cin>>a;
	cout<<"ingrese el valor de la suscripcion "<<endl;
	cin>>b;
	int cant[a];
	float porc[a],arc;
	for(int i=0;i<a;i++)
	{
		cout<<"ingrese la cantidad de suscripciones del vendedor "<<i+1<<endl;
		cin>>cant[i];
	}
	for (int i=0;i<a;i++)
	{
		porc[i]=(cant[i]*b)*0.02;
		cout<<"el porcentaje del vendedor "<<i+1<<" es igual a: "<<porc[i]<<endl;
	}

	for(int i=0;i<a;i++) 
    for(int j=i+1;j<a;j++) 
    if(porc[i]>porc[j])
	{     
        arc=porc[i]; 
        porc[i]=porc[j]; 
        porc[j]=arc; 
    } 
    cout<<"  "<<endl;
    cout<<"los porcentsajes de los 5 vendedores que menos percibieron son: "<<endl;
	for (int i=0;i<5;i++)
	{      
		cout<<porc[i]<<endl;
    }
}
