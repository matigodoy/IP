#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int a[5];
	int b,n=5;
	cout<<"original"<<endl;
	for(b=0;b<5;b++)
	{
		a[b]=n++;
		cout<<a[b]<<endl;
	}
	cout<<"copia"<<endl;
	for(b=0;b<5;b++)
	{
		int *p=&a[b];
		cout<<*p<<endl;
	}
}
