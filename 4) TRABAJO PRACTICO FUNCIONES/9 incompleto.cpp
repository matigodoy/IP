// Dadas tres longitudes y tres ángulos, determinar si pueden formar un triángulo. Tener en cuenta que ninguno de los
// lados puede ser mayor que la suma de los otros dos y que los tres ángulos deben sumar 180 grados.
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>
#include<cstdlib>
#include <limits>
#include <string.h>
using namespace std;
void carguelong();
void carguenum();
void respuesta(float w, float x, float y);
float i,j,k; //angulos
float a,b,c; //longitudes
float angulo[3],longitud[3];

int main(){
	carguelong();
	carguenum();
	respuesta(i,j,k);
	return 0;
}
void carguelong(){
	
	cout<<"cargue las longitudes "<<endl;
	for(int i=0;i<3;i++){
		cin>>longitud[i];
	}
	float suma1=longitud[0]+longitud[1];
	float suma2=longitud[1]+longitud[2];
	float suma3=longitud[2]+longitud[0];
	
		if(suma1<c){
			cout<<"No es un triangulo. "<<endl;
		}
		if(suma2<a){
			cout<<"No es un triangulo. "<<endl;
		}
		if(suma3<b){
			cout<<"No es un triangulo. "<<endl;
		}
}
void carguenum(){	
	cout<<"Cargue los tres angulos. "<<endl;
	for(int i=0;i<3;i++){
		cin>>angulo[i];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4+1;j++){
			if(angulo[i]<angulo[j]){
				int aux=angulo[i];
				angulo[i]=angulo[j];
				angulo[j]=aux;
			}
		}
	}
}
void respuesta(float w, float x, float y){
	float suma=i+j+k;
	if (suma==180) {
		cout<<"Los angulos suman "<<suma<<" por lo que es un triangulo."<<endl;
	}
	else
	{
		cout<<"Los angulos suman "<<suma<<" por lo que NO es un triangulo."<<endl;
	}
}
