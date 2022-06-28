// 13. Leer la matriz a de n filas por 5 columnas, donde cada columna representa lo siguiente:
// Columna 0: Legajos de los alumnos.
// Columna 1: Sexo del alumnado: {0=varón, 1=mujer}
// Columna 2: Estado civil: {0=soltero, 1=casado, 2=separado, 3=viudo}
// Columna 3: Edad del alumnado.
// Columna 4: Nota en un examen de una materia dada.
// Determinar y mostrar:
// a. La nota mínima. Imprimir los legajos de los alumnos que obtuvieron la nota mínima.
// b. Nota promedio y edad promedio del curso.
// c. Nota promedio de los alumnos por estado civil (cuatro promedios).
// d. Generar una matriz de dos columnas, con el código y la edad de las personas que obtuvieron la nota
// mínima y ordenarla por edad en forma ascendente.
#include<iostream>

//declaracion de funciones
int cargar();
int mostrar();

//declaracion de variables
int filas, columnas=5, nota=0, edad=0, solteros=0, casados=0, separados=0, viudos=0,x;
int numeros[50][50],j; //declaracion de matrices.
int matrizB[50][1];

	
using namespace std;

int main(){
	cargar();
	mostrar();
	return 0;
}

int cargar(){
	cout<<"ingrese con el teclado la cantidad de alumnos: ";
	cin>>filas;
	// Usuario ingresa los elementos de la columna 0 (legajo)
	for(int i=0;i<filas;i++){
		cout<<"Ingrese el legajo del alumno "<<i<<": ";   
		cin>>numeros[i][0];
	}
	// Usuario ingresa los elementos de la comumna 1 (sexo del alumno)
	for(int i=0;i<filas;i++){
		cout<<"Ingrese el sexo del alumno"<<i<<" {0=varon, 1=mujer}: ";   
		cin>>numeros[i][1];
	}
	// Usuario ingresa los elementos de la comumna 2 (estado civil)
	for(int i=0;i<filas;i++){
		cout<<"Ingrese el estado civil del alumno "<<i<<" {0=soltero, 1=casado, 2=separado, 3=viudo}: ";   
		cin>>numeros[i][2];
	}
	// Usuario ingresa los elementos de la comumna 3 (edad)
	for(int i=0;i<filas;i++){
		cout<<"Ingrese la edad del alumno "<<i<<": ";   
		cin>>numeros[i][3];
	}
	// Usuario ingresa los elementos de la comumna 4 (nota de un examen)
	for(int i=0;i<filas;i++){
		cout<<"Ingrese la nota en un examen del alumno "<<i<<": ";   
		cin>>numeros[i][4];
	}
}

int mostrar(){
	// Mostramos los alumnos que obtuvieron la nota minima 
	cout<<"Los (legajos) de los alumnos que obtuvieron la nota minima:"<<endl;
	for(int i=0;i<filas;i++){
			if (numeros[i][4]==4) {
				cout<<numeros[i][0]<<" | ";
			}
		cout<<"\n";
	}
	// Calculamos promedio de nota y edad del curso.
	cout<<"La nota promedio del curso:"<<endl;
	for(int i=0;i<filas;i++){
			nota=nota+numeros[i][4];
	}
	cout<<nota/filas<<endl;
	cout<<"La edad promedio del curso:"<<endl;
	for(int i=0;i<filas;i++){
			edad=edad+numeros[i][3];
	}
	cout<<edad/filas<<endl;
	// Calculamos nota promedio por cada estado civil (cuatro promedios)
	cout<<"Nota promedio de los alumnos solteros: "<<endl;
	for(int i=0;i<filas;i++){
		if (numeros[i][2]==0) {
			solteros=solteros+numeros[i][2];
		}
	}
	cout<<solteros/filas<<endl;
	cout<<"Nota promedio de los alumnos casados: "<<endl;
	for(int i=0;i<filas;i++){
		if (numeros[i][2]==1) {
			casados=casados+numeros[i][2];
		}
	}
	cout<<casados/filas<<endl;
	cout<<"Nota promedio de los alumnos separados: "<<endl;
	for(int i=0;i<filas;i++){
		if (numeros[i][2]==2) {
			separados=separados+numeros[i][2];
		}
	}
	cout<<separados/filas<<endl;
	cout<<"Nota promedio de los alumnos viudos: "<<endl;
	for(int i=0;i<filas;i++){
		if (numeros[i][2]==3) {
			viudos=viudos+numeros[i][2];
		}	
	}
	cout<<viudos/filas<<endl;
	// Generamos la matriz con legajo y nota de los alumnos que sacaron la nota minima
	cout<<"Matriz con legajo y nota de los alumnos que sacaron la nota minima: "<<endl;
	for(int i=0;i<filas;i++){
		if (numeros[i][4]==4) {
		matrizB[i][0]=numeros[i][0];
		}
	}
	for(int i=0;i<filas;i++){
		if (numeros[i][4]==4) {
		matrizB[i][1]=numeros[i][3];
		}
	}
	// Mostramos la matriz generada
	for(int i=0;i<filas;i++){
		for(int j=0;j<1;j++){
			cout<<matrizB[i][j]<<" | ";
		}
		cout<<"\n";
	}
}
