#include<iostream>

using namespace std;

//declaracion de funciones
int cargar();
int mostrar();

//declaracion de variables
int materias,alumnos;
char alum[50][50],mat[50][50];
float notas[50][50],promalum[50],prommat[50];

int main(){
	cargar();
	mostrar();
	
	return 0;
}
int cargar(){
	//ingresa el tamaño de la matriz
	cout<<"ingrese la cantidad de alumnos "<<endl;
	cin>>alumnos;
	cout<<"ingrese la cantidad de materias "<<endl;
	cin>>materias;
	
	//se ingresa un vector con los nombres
	cout<<"ingrese los nombres de todos los alumnos "<<endl;
	for(int i=0;i<alumnos;i++){
		cin>>alum[i];
	}
	
	//se ingresa otro vector con las materias
	cout<<"ingrese los nombres de todas las materias "<<endl;
	for(int j=0;j<materias;j++){
		cin>>mat[j];
	}
	
	//s ingresan los elementos de la matriz (son las notas de los alumnos en cada materia)
	for(int i=0;i<alumnos;i++){
		for(int j=0;j<materias;j++){
			cout<<"digite por teclado la nota del alumno "<<alum[i]<<" de la materia "<<mat[j]<<"  ";
			cin>>notas[i][j];
			cout<<endl;
			promalum[i]=promalum[i]+notas[i][j];//suma de las notas para sacar promedio por alumno
			prommat[j]=prommat[j]+notas[i][j];//suma de las notas para sacar promedio por materia
		}
	}
}

int mostrar(){
	int a,b,c=999,d;
	//se muestra el promedio de notas por alumno
	cout<<"alumno          promedio general "<<endl;
	for(int i=0;i<alumnos;i++){
		cout<<alum[i]<<"             "<<promalum[i]/materias<<endl;
		if(a<promalum[i]/materias){
			a=promalum[i]/materias;
			b=i;
		}
	}
	
	cout<<"  "<<endl;
	
	//se muestra el promedio de notas por materia
	cout<<"materia         promedio alcanzado "<<endl;
	for(int j=0;j<materias;j++){
		cout<<mat[j]<<"             "<<prommat[j]/alumnos<<endl;
		if(c>(prommat[j]/alumnos)){
			c=(prommat[j]/alumnos);
			d=j;
		}
	}
	
	//se muestra el eltuiante que mayor promedio obtuvo
	cout<<"estudiante premiado: "<<alum[b]<<" promedio: "<<promalum[b]/materias<<endl;
	
	//se muestra la materia que menos promedio obtuvo
	cout<<"materia mas costosa para el curso: "<<mat[d]<<" promedio: "<<prommat[d]/alumnos<<endl;
}
