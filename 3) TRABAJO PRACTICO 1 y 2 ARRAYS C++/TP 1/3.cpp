#include<iostream>
using namespace std;
int main()
{
	int x=0, y=0, numeros[33];
	do{
		if(x%3==0 && x!=100)
		{
			numeros[y++]=x;
		}
	}
	while(x++<100);
		for(y=0;y<33;y++)
		{
		cout<<"los numeros entre 0 y 100 divisibles por 3 son:"<<numeros[y]<<endl;
		}
}
