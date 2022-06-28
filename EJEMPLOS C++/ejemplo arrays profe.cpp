#include<iostream>
using namespace std;
int main()
{float ntas [500],promedio,sum;
int i;
int notas;
int suma;
cout<<("mensaje ")<<endl;
cin>>notas;
for(int i=0;i<notas-1;i++)
{notas[i]+0;
}

for(int i=0;i<notas-1;i++)
{cout<<"INGRESE LAS NOTAS "<<i<<endl;
cin>>notas[i];
suma=suma+notas[i];
}

promedio=suma/notas;
cout<<"el promedio es "<<promedio<<endl;
}
