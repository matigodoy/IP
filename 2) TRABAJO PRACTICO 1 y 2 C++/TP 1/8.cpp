#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int a;
int main()
{
	cout<<"ingrese su edad "<<endl;
	cin>>a;
	
	if (a<15)
	{
		cout<<"socio infantil, abona $10 "<<endl;
	}
	
	if ((a>=15)&&(a<21))
	{
		cout<<"socio cadete, abona $15 "<<endl;
	}
	
	if(a>50)
	{
		cout<<"mayor de 50 anos, no abona "<<endl;
	}
	
	if ((a>=21)&&(a<=50))
	{
		cout<<"socio activo, abona $20 "<<endl;
	}
	
}
