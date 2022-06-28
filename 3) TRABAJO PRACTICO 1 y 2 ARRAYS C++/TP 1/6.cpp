#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int a[40];
	int n=1;
	int acum=0;
	cout<<"numeros pares "<<endl;
	for(int i=0;i<40;i++)
	{
		a[i]=n++;
		if(a[i]%2==0)
		{
			cout<<a[i]<<endl;
			acum+=a[i];
		}
	}
	cout<<"suma de los pares "<<acum<<endl;
}
