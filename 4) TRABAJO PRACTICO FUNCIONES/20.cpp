// Una empresa dedicada a la fabricación de golosinas consta de tres plantas productoras. Conociendo la cantidad producida por cada centro, determinar: 
// La planta que mayor producción tuvo y la que menos produjo. 
// El porcentaje de incidencia de producción de cada una sobre el total. 
// El promedio general de producción por planta (Total / 3). 

#include<iostream>

using namespace std;
void cargar();
void analisis(float total);
float cant[3],total=0;

int main(){
	cargar();
	cout<<"la planta que mayor produccion tuvo es; "<<cant[0]<<endl;
	cout<<"la planta que menor produccion tuvo es; "<<cant[2]<<endl;
	cout<<"El porcentaje sobre el total de la primera es: "<<(cant[0]*100)/total<<endl;
	cout<<"El porcentaje sobre el total de el segundo es: "<<(cant[1]*100)/total<<endl;
	cout<<"El porcentaje sobre el total de la tercera es: "<<(cant[2]*100)/total<<endl;	
	cout<<"el promedio general es: "<<total/3;
	
return 0;
}

void cargar(){
	cout<<"ingrese la cantidad producida por cada centro "<<endl;
	for(int i=0;i<3;i++){
		cin>>cant[i];
		total=total+cant[i];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3+1;j++){
			
			if(cant[i]>cant[j]){
				int aux=cant[i];
				cant[i]=cant[j];
				cant[j]=aux;
			}
		}
	}
}



