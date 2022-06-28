#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int a,b,c,total;
int main()
{
	cout<<"ingrese la cantidad de km a recorrer "<<endl;
	cin>>a;
	cout<<"ingrese el precio del litro de combustible "<<endl;
	cin>>b;
	cout<<"ingrese el precio del peaje "<<endl;
	cin>>c;

	total=((((a*b)/13)+(c*2))*2);
	
	if(a>400)
	{
		cout<<"total + 50 $"<<total+50<<endl;
	}
	
	else
	{
		cout<<"total $"<<total<<endl;	
	}
	
}
