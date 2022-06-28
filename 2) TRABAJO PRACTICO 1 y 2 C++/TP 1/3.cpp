#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int a,acum,tot;
int main()
{
	cout<<"ingrese los numeros (cero para terminar) "<<endl;
	cin>>a;
	tot=0;
	acum=0;
	while (a!=0)
	{
		tot=tot+a;
		acum=acum+1;
		cin>>a;
	}
	cout<<"cantidad de numeros ingresados "<<acum<<endl;
	cout<<"suma total de los numeros "<<tot<<endl;
	
	
}
