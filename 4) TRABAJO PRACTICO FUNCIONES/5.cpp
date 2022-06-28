// Diseñar un programa que, al ingresar por teclado el precio por kilo y la cantidad en kilos adquirida por un cliente de tres productos (6 variables), muestre: 
// *El monto total en pesos correspondiente a la compra de cada producto. 
// *El total en pesos de la compra realizada por el cliente. 
// *Si el total es superior a $100, hacer un descuento del 10%. Mostrar el nuevo monto. 

#include<iostream>
using namespace std;

float cargar();
float resultado(float cargarkilo[3],float cargarprecio[3]);
float cargarkilo[3];
float cargarprecio[3];
float totalprecio=0;

int main(){
	cargar();
	resultado(cargarkilo,cargarprecio);
	cout<<"el monto total de la compra del primer producto es: $"<<cargarkilo[0]*cargarprecio[0]<<endl;
	cout<<"el monto total de la compra del segundo producto es: $"<<cargarkilo[1]*cargarprecio[1]<<endl;
	cout<<"el monto total de la compra del tercer producto es: $"<<cargarkilo[2]*cargarprecio[2]<<endl;
	cout<<"el resultado total es: $"<<totalprecio<<endl;
	if(totalprecio>100){
		cout<<"el resultado total con el 10% de descuento es: $"<<totalprecio*0.90<<endl;
	}
	
	return 0;
}

float cargar(){
	for(int i=0;i<3;i++){
		cout<<"ingrese la cantidad de kilos del producto "<<i+1<<endl;
		cin>>cargarkilo[i];
		
		cout<<"ingrese el precio del kilo del producto "<<i+1<<endl;
		cin>>cargarprecio[i];
	}
}
float resultado(float cargarkilo[3],float cargarprecio[3]){
	for(int i=0;i<3;i++){
		totalprecio=totalprecio+(cargarkilo[i]*cargarprecio[i]);
	}
}

