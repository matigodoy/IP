#include<iostream>
using namespace std;

//prptotipos de funciones
void pedirdatos();
void mult(float x, float y);

float num1,num2;

int main(){
	pedirdatos();
	mult(num1,num2);
	
	return 0;
 }
 
void pedirdatos(){
	cout<<"ingrese 2 numeros "<<endl;
	cin>>num1>>num2;
}

void mult(float x, float y){
	float multiplicacion=x*y;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
}

