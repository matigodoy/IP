// Ingresar tres números (admita que puedan tener decimales). Calcular su promedio. Si el promedio es mayor a 10, mostrarlo. 
// En ambos casos, calcular y mostrar las diferencias entre cada número y el promedio. 
#include<iostream>
using namespace std;

void pedirnumeros();
void prom(float x,float y,float z);

float num1,num2,num3;

int main(){
	pedirnumeros();
	prom(num1,num2,num3);
	
	return 0;
}

void pedirnumeros(){
	cout<<"ingrese los tres numeros "<<endl;
	cin>>num1>>num2>>num3;
}

void prom(float x,float y,float z){
	float promedio=(num1+num2+num3)/3;
	if(promedio>10){
		cout<<"el promedio es: "<<promedio<<endl;
	}
	
	cout<<"la diferencia es que el primer numero es: "<<num1<<" y el promedio es: "<<promedio<<endl;
	cout<<"la diferencia es que el segundo numero es: "<<num2<<" y el promedio es: "<<promedio<<endl;
	cout<<"la diferencia es que el tercer numero es: "<<num3<<" y el promedio es: "<<promedio<<endl;
}

