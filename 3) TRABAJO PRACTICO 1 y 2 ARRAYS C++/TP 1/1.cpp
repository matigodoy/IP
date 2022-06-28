#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int a[11];
	int n=4;
	for(int i=0;i<=11;i++)
	{
		a[i]=n++;
		cout<<a[i]<<endl;
	}
}
