// Sabiendo la cantidad de bancos de un aula, y la cantidad de alumnos inscriptos para ese curso, determinar si alcanzan los bancos existentes. 
// De no ser así, informar además cuantos bancos sería necesario agregar. 
#include<iostream>
using namespace std;
int ingresobancos();
int ingresoalumnos();
int analisis(int x,int y);

int a,b;

int main(){
	ingresobancos();
	ingresoalumnos();
	analisis(a,b);
	
	return 0;
}

int ingresobancos(){
	cout<<"Ingrese la cantidad de bancos en el aula "<<endl;
	cin>>a;
	
	return a;
}
int ingresoalumnos(){
	cout<<"Ingrese la cantidad de alumnos inscriptos para el curso "<<endl;
	cin>>b;
	return b;
}
int analisis(int x, int b){
	if(a==b){
		cout<<"El numero de alumnos y bancos es el mismo "<<endl;
	}
	if(a>b){
		cout<<"sobran "<<a-b<<endl;
	}
	if(a<b){
		cout<<"faltan "<<b-a<<endl;
	}
	
	return 0;
}

