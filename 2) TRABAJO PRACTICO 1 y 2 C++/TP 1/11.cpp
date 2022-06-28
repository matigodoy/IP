#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

using namespace std;
int a;
int cont1=0,cont2=0,cont3=0;

int main()
{
	do
	{	
		cout<<"ingrese los numeros (9999 para finalizar) "<<endl;
		cin>>a;
	
		if (a>0)
		{
			cout<<"es positivo "<<endl;
			cont1=cont1+1;
		}
	
			if (a<0)
		{
			cout<<"es negativo "<<endl;
			cont2=cont2+1;
		}
	
			if (a==0)
		{
			cout<<"es cero "<<endl;
			cont3=cont3+1;
		}
	}
	while(a!=9999);
	system("cls");
	
	cout<<"cantidad de positivos "<<cont1-1<<endl;
	cout<<"cantidad de negativos "<<cont2<<endl;
	cout<<"cantidad de ceros "<<cont3<<endl;
	
}
