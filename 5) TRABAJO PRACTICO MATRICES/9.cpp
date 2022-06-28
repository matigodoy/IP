//Realizar las siguientes operaciones en una matriz A de orden m*n:
//a. Leer el orden de A y la matriz A.
//b. Leer un entero k tal que 1 <= k <= n.
//c. Determinar el máximo y el mínimo elemento de la columna k.
//d. Mostrar las filas que contienen el máximo y el mínimo.
//e. Intercambiar la fila del máximo por la primera.
//f. Intercambiar la fila del mínimo por la última.
//g. Mostrar la nueva columna k.
//h. Si la fila que contiene al máximo es la primera, o si la fila que contiene al mínimo es la última, mostrar un mensaje de error.

#include<iostream>

using namespace std;

//declaracion de funciones
int cargar();
int analisis();

//declaracion de variables a usar.
int filas,columnas,k,numeros[50][50];

int main(){
	cargar();
	analisis();
	
	//muestra la columna k con todos los cambios.
	cout<<"la columna k es: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=k;j<k+1;j++){
			cout<<" | "<<numeros[i][j]<<" | ";
		}
		cout<<"\n";
	}
	
	return 0;
}

int cargar(){
	cout<<"ingrese con el teclado la cantidad de filas de la matriz ";
	cin>>filas;
	cout<<"ingrese con el teclado la cantidad de columnas de la matriz ";
	cin>>columnas;
	
	//almacenar elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"digite con el teclado el elemento ["<<i<<"]["<<j<<"] ";
			cin>>numeros[i][j];
		}
	}
	
	//lee un numero entero en donde 1 <= k <= n.
	do{	
		cout<<"digite por teclado un numero entero que no sea menor a uno y no mayor a la cantidad de columnas "<<endl;
		cin>>k;
		if(k<1 || k>columnas){
			cout<<"el numero ingresado no cumple con las condiciones "<<endl;
		}
	}
	while (k<1 || k>columnas);
	
	k=k-1;//se le resta uno ya que en las matrices la primera columna o fila empiezan desde el 0.
}
    
int analisis(){
	//determina el elemento maximo y minimo de la columna k.
	int mayor,menor=999,filamax,filamin;
	for(int i=0;i<filas;i++){
		for(int j=k;j<k+1;j++){
			if(mayor<numeros[i][j]){
				mayor=numeros[i][j];
				filamax=i;//guarda el numero de fila del elemento maximo
			}
			if(menor>numeros[i][j]){
				menor=numeros[i][j];
				filamin=i;//guarda el numero de fila del elemeto minimo
			}
		}
	}
	
	//muestra un mensaje de error si la fila que contiene al maximo es la primera, o si la fila que contiene al minimo es la última.
	if(filamax==0 || filamin==columnas-1){
		cout<<"error "<<endl;
	}
	else{
		//muestra la fila que contiene el maximo elemento de la columna k.
		cout<<"la fila que contiene el maximo "<<endl;
		for(int i=filamax;i<filamax+1;i++){
			for(int j=0;j<columnas;j++){
				cout<<" | "<<numeros[i][j]<<" | ";
			}
			cout<<"\n";
		}
		
		//muestra la fila que contiene el minimo elemento de la columna k.
		cout<<"la fila que contiene el minimo "<<endl;
		for(int i=filamin;i<filamin+1;i++){
			for(int j=0;j<columnas;j++){
				cout<<" | "<<numeros[i][j]<<" | ";
			}
			cout<<"\n";
		}
		
		//intercambiar la fila del maximo por la primera.
		int primfila[0][columnas];
		for(int j=0;j<columnas;j++){
			primfila[0][j]=numeros[0][j];
			numeros[0][j]=numeros[filamax][j];
			numeros[filamax][j]=primfila[0][j];
		}
		
		//intercambiar la fila del minimo por la ultima.
		int ultfila[0][columnas];
		for(int j=0;j<columnas;j++){
			ultfila[0][j]=numeros[columnas-1][j];
			numeros[columnas-1][j]=numeros[filamin][j];
			numeros[filamin][j]=ultfila[0][j];
		}
	}

}
