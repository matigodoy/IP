#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int a,b,resp=1;
int masc=0;
int fem=0;
int may=0;
int men=999;

int main()

{
	while(resp!=0)
	{
		cout<<"ingrese el sexo de la persona (1 para masculino).(2 para femenino) "<<endl;
		cin>>a;
		
		if (a==1)
		{
			cout<<"es masculino "<<endl;
			masc=masc+1;
		}
		
		if (a==2)
		{
			cout<<"es femenino "<<endl;
			fem=fem+1;
		}
		
		cout<<"ingrese la edad de la persona "<<endl;
		cin>>b;
		while (b>may)
		{
			may=b;
		}
		
		while (b<men)
		{
			men=b;
		}	
		cout<<"continuar 1, terminar 0"<<endl;
		cin>>resp;
	}
		system("cls");
		cout<<"total de masculinos "<<masc<<endl;
		cout<<"total de femeninos "<<fem<<endl;
		cout<<"edad mayor "<<may<<endl;
		cout<<"edad menor "<<men<<endl;
}
