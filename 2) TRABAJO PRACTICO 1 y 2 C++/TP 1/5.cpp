#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int a;
int main()
{
	cout<<"ingrese los numeros (cero para terminar) "<<endl;
	cin>>a;
	
	while (a!=0)
	{
		if (a>0)
		{
			cout<<"es positivo "<<endl;
			cin>>a;
		}
		
		if (a<0)
		{
			cout<<"es negativo "<<endl;
			cin>>a;
		}
	}
	
}
