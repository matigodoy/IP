#include <iostream>

using namespace std;

//declaracion de funciones
int cargar();
int analisis();

//declaracion de variables
int a, b, x, z, y=1, i=2;

 
int main(int argc, char* argv[]){
	cargar();
	analisis();
	
	return 0;
}

int cargar(){
	//se ingresan los numeros
	cout<<"ingrese por teclado un numeros que corresponde a la fila "<<endl;
	cin>>a;
	cout<<"ingrese por teclado un numeros que corresponde a la columna "<<endl;
	cin>>b;
}
int analisis(){
	//detecta el mcd
	if (a<b){x=a; z=b;} else {x=b; z=a;}
	do {
		if (x%i==0 && z%i==0){
		y=y*i;
		x=x/i; z=z/i;
		i=2;
		}
	else i++;
    }
	while(i<=x);
	
	//muetra los datos
	cout<<"el MCD es "<<y<<endl;
	if(y==1){
		cout<<"los numeros son coprimos "<<endl;
	}
	else{
		if(y!=1){
		cout<<"los numeros no son coprimos "<<endl;
		}
	}
	
	
}
