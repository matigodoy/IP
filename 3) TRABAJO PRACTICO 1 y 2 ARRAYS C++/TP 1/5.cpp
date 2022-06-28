#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int a[10];
    float b[10];
    srand(time(0));

    for(int i=0;i<10;i++)
        {
            a[i]=50+(rand()%51);
        }

for(int i=0;i<10;i++)
    {
        b[i]=a[i]*0.5;
    }

for(int i=0;i<10;i++)
	{
    	cout <<a[i]<<"       "<<b[i]<<endl;
    }
}
