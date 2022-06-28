// Desarrolle un programa que almacene en una matriz los resultados de las votaciones para intendente de la
// ciudad. Considere a la ciudad dividida en n Seccionales de Policía (una por fila), y m partidos postulando a un
// candidato cada uno (uno por columna). Los candidatos se identifican con el número de columna. El total de
// votos para cada candidato, es igual a la suma de los votos en cada Seccional. El programa deberá:
// a. Mostrar la tabla con los resultados generales.
// b. Calcular y mostrar el número total de votos obtenido por cada candidato, y el porcentaje sobre el total de
// votos.
// c. Si alguno de los candidatos recibió más del 50 % de los votos, el programa debe mostrar un mensaje
// declarando ganador a ese candidato.
// d. Si ninguno logró más del 50 % de los votos, el programa debe mostrar un mensaje, declarando una
//  segunda vuelta entre los dos candidatos que recibieron los mayores porcentajes.
#include <iostream>
#include <conio.h>
using namespace std;

//declaracion de funciones
float cargar();
float analisis();

int filas, columnas,a,sumaColumnas,i,j,x,ganador=0; //declaracion de variables
float numeros[10][10],sumaTotal=0.0,porcentaje;//declaracion de matriz

int main(){
	cargar();
	analisis();
	return 0;
}

float cargar(){
	cout<<"ingrese por teclado la cantidad de filas de la matriz (Cant. seccionales): ";
	cin>>filas;
	cout<<"ingrese por teclado la cantidad de columnas de la matriz (Cant. partidos): ";
	cin>>columnas;
	
	//almacenar elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"digite por teclado (los votos) del elemento ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}

}
float analisis(){
	//Hacemos la suma total de la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			sumaTotal=sumaTotal+numeros[i][j];
		}
	}
	// Calculamos la sumas de cada voto
	for(int x=0;x<columnas;x++){
		sumaColumnas=0;
			for(int y=0; y<filas; y++)
				sumaColumnas=sumaColumnas+numeros[y][x];
				// Sacammos el porcentaje de votos
				porcentaje=(sumaColumnas/sumaTotal)*100;
				cout<< "\nLa suma de votos del partido "<<x+1<<" es: "<<sumaColumnas<<endl;
				// Mostramos el porcentaje de votos
				cout<< "El porcentaje de votos fue del %"<<porcentaje<<endl;
				if (porcentaje>50){
					cout<< "EL GANADOR ES EL PARTIDO "<<x+1<<" (con mayor cantidad de votos)."<<endl;
					ganador=1;
				}
	}
	// Si ganador es 0 significa que no hubo ningun ganador, entonces muestra el siguiente mensaje
	if(ganador==0){
		cout<<"Ningun partido resulto ganador, habra una segunda vuelta entre los dos candidatos que recibieron los mayores porcentajes";
	}
	
}
