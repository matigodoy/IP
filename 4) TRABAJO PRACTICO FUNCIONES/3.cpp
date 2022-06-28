// Ingrese por teclado cuatro variablesi, j, k y l. Si i / j resulta igual a k / l mostrar un mensaje indicando que los cocientes son iguales. En caso contrario no dar mensaje. 
// Recuerde verificar que los divisores sean distintos de cero, y en este caso indicar la imposibilidad de realizar las operaciones. 
#include<iostream>

using namespace std;

void carguenum();
void analisis(float w, float x, float y, float z);

float i,j,k,l;

int main(){
	carguenum();
	analisis(i,j,k,l);
	
	return 0;
}

void carguenum(){
	do{	
		cout<<"cargue el valor de los 4 numeros. Los numeros no pueden ser ceros "<<endl;
		cin>>i>>j>>k>>l;
		if(i==0 || j==0 || k==0 || l==0){
			cout<<"imposibilidad de realizar la operacion "<<endl;
		}
	}
	while(i==0 || j==0 || k==0 || l==0);
}

void analisis(float w, float x, float y, float z){
	float div1 = i/j;
	float div2 = k/l;
	if (div1 == div2){
		cout<<"son iguales "<<endl;
	}
}
