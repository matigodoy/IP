// Desarrollar un programa que implemente el conocido juego de “la Batalla Naval”. El programa debe incluir la
// posibilidad de elegir entre jugar contra la máquina, o jugar entre dos personas. En caso de jugar contra la
// máquina, el programa debe generar aleatoriamente el tablero propio, pero permitir que el jugador “humano” arme
// su propio tablero. En caso de jugar dos humanos, cada uno debe armar, a su turno, su tablero. Considere las
// siguientes reglas al armar un tablero:
// · Los barcos pueden disponerse en forma vertical u horizontal únicamente.
// · Ningún barco puede tocarse con ningún otro, ni siquiera en las esquinas.
// · En ambos tableros, debe haber la misma cantidad de barcos de la misma clase.

#include <iostream>
using namespace std;

//Declaracion de variables
int a0(int numeros[][10]), aX(int numeros[][10]);
int barquito1(int numeros[][10]),barquito2(int numeros[][10]),barquito3(int numeros[][10]),barquito4(int numeros[][10]);
int batalla(int disparo,int &j,int h[],int a[]);

int main(int argc, char *argv[]) {
	//Jugador ingresa cantidad de jugadores 
    int cantidad;
    char jug[10][10];
    cout<<"Cuantas personas jugaran? ";
    cin>>cantidad;
    //Hacemos for para ingresar el nombre del jugador (como char)
    for(int i=0;i<cantidad;i++){
        cout<<"Ingrese nombre jugador "<<i+1<<" : ";
        cin>>jug[i];
        cout<<endl;
    }
    int disparo;
    //Declaramos que longitud tendrá el juego, diciendo los disparos
	cout<<endl<<"Cuantos disparos haran?"<<endl;
	cin>>disparo;
    int h[4],a[4];
    int i=1,gan=0,seg=0;
    for(int f=0;f<cantidad;f++){
   		batalla(disparo,i,h,a);
    	i++;
    	cout<<endl<<endl<<"Turno del siguiente jugador"<<endl;}
    for(int j=0;j<cantidad;j++){
        if(h[j+1]>seg){
        	if(seg>gan){
               	seg=gan;gan=h[j+1];}
            else
            seg=h[j+1];
        	}                  
    }
    //Al finalizar el ciclo for, decimos el ganador.
    cout<<"Ganador: "<<jug[gan]<<". Barquitos Hundidos: "<<h[gan]<<endl;
    return 0;
}
int aX(int fal [][10]){
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
        fal[i][j]=0;           
}
//Ponemos cada valor de la matriz como cero
int a0(int numeros [][10]){
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            numeros[i][j]=0;          
}
//Decimos al jugador que ingrese la fila a la que pondra el barquito 1
int barquito1(int numeros[][10]){
int fila,columna;
	cout<<"Barquito de 1 parte"<<endl<<"Ingrese fila"<<endl;
	cin>>fila;
	cout<<"Ingrese columna"<<endl;
	cin>>columna;
	numeros[fila-1][columna-1]=1;
}
int barquito2(int numeros[][10]){
int fila,columna;
//Decimos al jugador que ingrese la fila a la que pondra el barquito 2
cout<<"Barquito de 2 partes"<<endl;
	for(int i=0;i<2;i++){
        cout<<"Ingrese fila"<<endl;
        cin>>fila;
        cout<<"Ingrese columna"<<endl;
        cin>>columna;
        numeros[fila-1][columna-1]=2;
    }            
}
//Decimos al jugador que ingrese la fila a la que pondra el barquito 3
int barquito3(int numeros[][10]){
int fila,columna;
cout<<"Barquito de 3 partes"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Ingrese fila"<<endl;
        cin>>fila;
        cout<<"Ingrese columna"<<endl;
        cin>>columna;
        numeros[fila-1][columna-1]=3;
    }
}
//Decimos al jugador que ingrese la fila y columna a la que pondra el barquito 4
int barquito4(int numeros[][10]){
    int fila,columna;
    cout<<"Barquito de 4 partes"<<endl;
        for(int i=0;i<4;i++){
            cout<<"Ingrese fila"<<endl;
            cin>>fila;
            cout<<"Ingrese columna"<<endl;
            cin>>columna;
            numeros[fila-1][columna-1]=4;
        }
}
//Decimos al jugador que ingrese la fila y columna que disparará
int batalla(int disparo,int &j,int h[],int a[]){
h[j]=0;
a[j]=0;                       
int numeros[10][10];
a0(numeros);
barquito1(numeros);
barquito2(numeros);
barquito3(numeros);
barquito4(numeros);
int k=5;
int fal[10][10],fila,columna,c1=0;
aX(fal);
while(c1<disparo){
    cout<<"Ingrese objetivo!"<<endl<<endl;
    cout<<"Ingrese columna: "<<endl;
    cin>>columna;
    cout<<"Ingrese fila: "<<endl;
    cin>>fila;
    //Si el elemento no coincide con el barco, entonces falló
    if(numeros[fila-1][columna-1]==0){
        cout<<endl<<"Has fallado"<<endl<<endl;
    }
	else{
		//Si el elemento coincidé entonces acertó
    if(numeros[fila-1][columna-1]==1){
        cout<<"Hundiste el Barquito de una parte!"<<endl;fal[fila-1][columna-1]=1;h[j]++;
	}
    if(numeros[fila-1][columna-1]==2){
    	cout<<"Averiaste Barquito de 2 partes"<<endl;fal[fila-1][columna-1]=2;
        numeros[fila-1][columna-1]=0;
        for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
            	if(numeros[i][j]==2){
                cout<<"te falta una/s parte/s"<<endl;
                a[j]++;k=0;
				}                                             
            	if(k==5){cout<<"El Barquito se ha hundido!"<<endl;h[j]++;
				}
    }
    //Si el elemento coincidé entonces acertó
    if(numeros[fila-1][columna-1]==3){
        cout<<"Golpeaste el Barquito de tres partes"<<endl;fal[fila-1][columna-1]=3;
        numeros[fila-1][columna-1]=0;
        for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
                if(numeros[i][j]==3){
                cout<<"te falta una/s parte/s"<<endl;a[j]++;k=0;}
                    if(k==5){
					cout<<"El Barquito se ha hundido!"<<endl;h[j]++;
					}
    }
    //Si el elemento coincidé entonces acertó
    if(numeros[fila-1][columna-1]==4){
        cout<<"Hundiste Barquito de cuatro partes"<<endl;fal[fila-1][columna-1]=4;
        numeros[fila-1][columna-1]=0;
        for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
                if(numeros[i][j]==4){
                	cout<<"te falta una/s parte/s"<<endl;a[j]++;k=0;
				}
                if(k==5){
					cout<<"El Barquito se ha hundido!"<<endl;h[j]++;
				}             
    	}                                              
    }
    //En caso de fallar
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<fal[i][j];
		}
    	cout<<endl;
    	}
    	cout<<endl<<endl<<endl<<endl;
   		c1++;
   		k=5;
    	}
    }


