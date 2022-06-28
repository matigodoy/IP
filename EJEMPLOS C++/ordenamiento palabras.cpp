#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>
#include<cstdlib>
#include <limits>
#include <string.h>
using namespace std;

char e1[4][10],temp[10];

int main(){
	cout<<"CUANDO VUELVES AL REFUJIO, TE PONES A PENSAR EN LO SOLO QUE TE ENCUENTRAS Y QUE NECESITAS ALGUNA COMPAÑIA "<<endl;
	cout<<"ENTONCES SE TE OCURRE HACERTE AMIGO DE UNAS PIEDRAS. "<<endl;
	cout<<"UNA VEZ DECORADAS TIENES QUE ELEJIR LOS NOMBRES DE LAS 4 PIEDRAS "<<endl;
	
	for(int i=0;i<4;i++){
		cin>>e1[i];
	}
	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			if(strcmp(e1[i],e1[j])>0){
				strcpy(temp,e1[i]);
				strcpy(e1[i],e1[j]);
				strcpy(e1[j],temp);
			}
		}
	}
	cout<<"LOS NOMBRES ORDENADOS SON "<<endl;
	for(int i=0;i<4;i++){
		cout<<e1[i]<<endl;
	}
	
	return 0;
}

