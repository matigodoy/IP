#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int numeros[100];
	int n=1,acum=0;
	cout<<"Los numeros pares entre 1 y 100 son:"<<endl;
	for(int i=0;i<100;i++)
	{
		numeros[i]=n++;
		if(numeros[i]%2==0)
		{
			cout<<numeros[i]<<endl;
		}
	}
	
}
