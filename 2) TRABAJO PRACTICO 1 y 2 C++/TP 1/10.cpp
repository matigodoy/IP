#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>
#include<cstdlib>
using namespace std;

int b;
int acum1=0;
int acum2=0;
int cont=0;

int main()
{
	do
	{
		cout<<"1 para tirar el dado, 0 para terminar "<<endl;
		cin>>b;
		if (b==1)
		{
			unsigned int a=0;
			srand(unsigned(time(0)));
			a=rand()%7;
			cout<<a<<endl;
			cont=cont+1;
				
			if (a==6)
			{
				acum1=acum1+1;
			}
		
			if (a==1)
			{
				acum2=acum2+1;
			}
			
		}
	}
	while(b==1);
	
	cout<<"total de tiradas "<<cont<<endl;
	cout<<"total de unos "<<acum2<<endl;
	cout<<"total de seis "<<acum1<<endl;
}
