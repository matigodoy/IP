#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int a,b,c,promedio;
int main()
{
	cout<<"ingrese las 3 notas "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	promedio=(a+b+c)/3;
	cout<<"el promedio es "<<promedio<<endl;
	
	if (promedio>=6)
	{
		cout<<"esta aprobado "<<endl;
	}
	
	if (promedio<6)
	{
		cout<<"esta desaprobado "<<endl;
		if ((promedio>=4)&&(promedio<=6))
		{
		cout<<"para diciembre "<<endl;
		}
		if (promedio<4)
		{
		cout<<"para marzo "<<endl;
		}
	}
	
}
