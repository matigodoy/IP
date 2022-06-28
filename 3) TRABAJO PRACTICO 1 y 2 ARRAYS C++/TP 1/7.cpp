#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <iostream>
using namespace std;
int main()
{
	int a[5];
	int j,acum=0;
	float b;
	
	for(j=0;j<5;j++)
	{
		cout<<"ingrese un numero "<<endl;
		cin>>a[j];
		acum+=a[j];
	}
	b=acum/5;
	cout<<"la media aritmetrica es "<<b<<endl;
}

