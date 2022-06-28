#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int a,total;
int main()
{
	cout<<"ingrese los precios (cero para terminar) "<<endl;
	cin>>a;
	total=0;
	
	while (a!=0)
	{
		total=total+a;
		cin>>a;
	}
	cout<<"el total con descuento es "<<total*0.85<<endl;
	
	
	
}
