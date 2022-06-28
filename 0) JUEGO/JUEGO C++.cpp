#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>
#include<cstdlib>
#include <limits>
#include <string.h>
#include <sstream>
#include<windows.h>
using namespace std;

	//VARIABLES
	int a,b,c,d,e,f,g,s[3],x,y;
	
	//FUNCIONES
	int pescar(int e);
	int azarcomida();
	int peleanimal();
	void recolectar();
	int buscaru(int s[3],int t);
	int buscarv(int s[3],int t);
	int buscarw(int s[3],int t);
	

int main()
{
	system("color 5A");
	
	//COMIENZO
	
	cout<<"                CAPITULO 1"<<endl;
	cout<<"TE DESPIERTAS EN UNA ISLA SIN RECORDAR NADA."<<endl;
	cout<<"LO PRIMERO QUE VES A LO LEJOS ES UN AVION CAIDO. "<<endl;
	cout<<"(SALUD 7/10), (HAMBRE 4/10), (AGUA 6/10), (ENERGIA 5/10) "<<endl;
	cout << "              PRESS ENTER TO CONTINUE";
		cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
			system("cls");
	cout<<" "<<endl;
	cout<<"TIENES LA OPOTUNIDAD DE: CONSEGUIR MADERA (1). INTENTAR DE CONSEGUIR BERRIES DE LOS ARBUSTOS (2). "<<endl;
	do{
		cin>>a;
		if(a!=1&&a!=2){
			cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) O (2)"<<endl;
		}
	}
	while(a!=1&&a!=2);
	system("cls");
	if (a==1)
	{
		cout<<"BUSCASTE MADERA, TE BAJO LA VIDA PORQUE TUVISTE QUE GOLPEAR UN ARBOL PARA PODER CONSEGUIR DICHA MADERA"<<endl;
		cout<<"CON LA MADERA TE CONSTRUISTE UN HACHA, QUE PUEDES USAR PARA RECOLECTAR MADERA O PARA INTENTAR CAZAR ALGUN ANIMAL. "<<endl;
		cout<<"(SALUD 5/10), (HAMBRE 4/10), (AGUA 5/10), (ENERGIA 4/10). "<<endl;
		Sleep(25000);
		system("cls");
		cout<<"PRECIONA (1) RECOLECTAR MADERA DE LAS PALMERAS. O (2) PARA INTENTAR CAZAR ALGUN ANIMAL (2). "<<endl;
		do{
			cin>>b;
			if(b!=1 && b!=2){
				cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) O (2)"<<endl;
			}
		}
		while(b!=1 && b!=2);
		system("cls");
		if (b==1)
		{
			cout<<"RECOLECTASTE MADERA, CUANDO HACHASTE LAS PALMERAS SE CAYERON ALGUNOS COCOS Y TIENES COMIDA."<<endl;
			cout<<"SUBE TU NIVEL DE SALUD, HAMBRE, AGUA Y ENERGIA. "<<endl;
			cout<<"(SALUD 6/10), (HAMBRE 7/10), (AGUA 10/10), (ENERGIA 5/10). "<<endl;
		}
		if(b==2)
		{
			cout<<"INTENTASTE IR A CAZAR ANIMALES Y NO CONSEGISTE NADA. TU NIVEL DE ENERGIA ESTA MUY BAJO Y PASAS MUCHA HAMBRE."<<endl;
			cout<<"(SALUD 5/10), (HAMBRE 1/10), (AGUA 4/10), (ENERGIA 1/10). "<<endl;
		}
	}
	if(a==2)
	{
		cout<<"CONSEGUISTE BERRIES PARA ALIMENTARTE, PERO HAY QUE ELEGIR CUALES VAS COMER. "<<endl;
		cout<<"TIENES PARA ELEIR ENTRE, ROJAR (1), BLANCAS (2), AZULES (3). "<<endl;
		do{
			cin>>c;
			if(c!=1 && c!=2 && c!=3){
				cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) - (2) - (3). "<<endl;
			}
		}
		while(c!=1 && c!=2 && c!=3);
		if(c==1)
		{
			cout<<"SON BERRIES VENENOSAS,BAJA TU NIVEL DE HAMBRE, DE AGUA Y TU SALUD. "<<endl,
			cout<<"(SALUD 5/10), (HAMBRE 1/10), (AGUA 3/10), (ENERGIA 4/10). "<<endl;
		}
		if(c==2)
		{
			cout<<"SON BERRIES NORMALES, SUBE TU NIVEL DE HAMBRE, DE AGUA Y TU SALUD. "<<endl,
			cout<<"(SALUD 7/10), (HAMBRE 7/10), (AGUA 8/10), (ENERGIA 5/10). "<<endl;
		}
		if(c==3)
		{
			cout<<"SON LAS MEJORES BERRIES QUE PODRAS HABER ELEJIDO, SUBE TU NIVEL DE HAMBRE, DE AGUA, SALUD Y ENERGIA. "<<endl,
			cout<<"(SALUD 8/10), (HAMBRE 9/10), (AGUA 8/10), (ENERGIA 7/10). "<<endl;
		}
	}
	Sleep(30000);
	system("cls");
	cout<<"PASO UN DIA."<<endl;
	int b1=0;
	if (b==1)
	{
		cout<<"AL HABER RECOGIDO MADERA PUEDES HACERTE UNA CAÑA DE PESCAR."<<endl;
		pescar(e);//FUNCION
		if(d==1 || d==2 || d==3)
		{
			cout<<"(SALUD 7/10), (HAMBRE 9/10), (AGUA 9/10), (ENERGIA 5/10). "<<endl;
		}
		if(d==4 || d==5 || d==6)
		{
			cout<<"(SALUD 8/10), (HAMBRE 10/10), (AGUA 9/10), (ENERGIA 6/10). "<<endl;
		}
	}
	if (b==2)
	{
		cout<<"CUANDO SALISTE EN BUSCA DE ANIMALES, ENCONTRASTE EN EL PISO UNAS CUANTAS MADERAS. CON ESO CONSTRUISTE UNA CAÑA DE PESCAR."<<endl;
		pescar(e);//FUNCION
		if(d==1 || d==2)
		{
			cout<<"(SALUD 6/10), (HAMBRE 3/10), (AGUA 4/10), (ENERGIA 3/10). "<<endl;
		}
		if(d==3 || d==4)                                                              //NO SALTA A LAS VARIABLES
		{
			cout<<"(SALUD 7/10), (HAMBRE 4/10), (AGUA 4/10), (ENERGIA 5/10). "<<endl;
		}
	}
	if (a==2)
	{
		cout<<"TIENES QUE CONSEGUIR MADERA, PARA ELLO TIENES QUE PEGARLE A UN ARBOL. TE BAJA UN POCO LA SALUD Y LA ENERGIA. "<<endl;
		if(c==1)
		{
			cout<<"(SALUD 3/10), (HAMBRE 1/10), (AGUA 3/10), (ENERGIA 3/10). "<<endl;
		}
		if(c==2)
		{
			cout<<"(SALUD 5/10), (HAMBRE 7/10), (AGUA 8/10), (ENERGIA 4/10). "<<endl;
		}
		if(c==3)
		{
			cout<<"(SALUD 6/10), (HAMBRE 9/10), (AGUA 8/10), (ENERGIA 6/10). "<<endl;
		}
		cout<<" "<<endl;
		cout<<"CON LA MADERA PUEDES CREARTE UN HACHA (1). O UNA LANZA (2). "<<endl;
		do{
			cin>>f;
			if(f!=1 && f!=2){
				cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) O (2)"<<endl;
			}
		}
		while(f!=1 && f!=2);
		system("cls");
		if(f==2)
		{
			azarcomida();//FUNCION
			if (g==1)
			{
				if(c==1)
				{
					cout<<"PUDISTE CONSEGUIR ALGO DE COMIDA, TE SUBE UN POCO EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 4/10), (HAMBRE 2/10), (AGUA 4/10), (ENERGIA 2/10). "<<endl;
				}
				if(c==2)
				{
					cout<<"PUDISTE CONSEGUIR ALGO DE COMIDA, TE SUBE UN POCO EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 6/10), (HAMBRE 8/10), (AGUA 9/10), (ENERGIA 3/10). "<<endl;
				}
				if(c==3)
				{
					cout<<"PUDISTE CONSEGUIR ALGO DE COMIDA, TE SUBE UN POCO EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 7/10), (HAMBRE 10/10), (AGUA 9/10), (ENERGIA 5/10). "<<endl;
				}
			}
			if (g==2)
			{
				if(c==1)
				{
					cout<<"PUDISTE CONSEGUIR COMIDA, TE SUBE UN POCO EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 5/10), (HAMBRE 3/10), (AGUA 5/10), (ENERGIA 2/10). "<<endl;
				}
				if(c==2)
				{
					cout<<"PUDISTE CONSEGUIR ALGO DE COMIDA, TE SUBE UN POCO EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 7/10), (HAMBRE 9/10), (AGUA 10/10), (ENERGIA 3/10). "<<endl;
				}
				if(c==3)
				{
					cout<<"PUDISTE CONSEGUIR ALGO DE COMIDA, TE SUBE UN POCO EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 8/10), (HAMBRE 10/10), (AGUA 10/10), (ENERGIA 5/10). "<<endl;
				}
			}
			if (g==3)
			{
				if(c==1)
				{
					cout<<"PUDISTE CONSEGUIR COMIDA, TE SUBE EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 6/10), (HAMBRE 4/10), (AGUA 6/10), (ENERGIA 2/10). "<<endl;
				}
				if(c==2)
				{
					cout<<"PUDISTE CONSEGUIR ALGO DE COMIDA, TE SUBE EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 8/10), (HAMBRE 10/10), (AGUA 10/10), (ENERGIA 3/10). "<<endl;
				}
				if(c==3)
				{
					cout<<"PUDISTE CONSEGUIR ALGO DE COMIDA, TE SUBE EL HAMBRE, LA SALUD Y EL AGUA, PERO LA ENERGIA TE BAJA. "<<endl;
					cout<<"(SALUD 9/10), (HAMBRE 10/10), (AGUA 10/10), (ENERGIA 5/10). "<<endl;
				}
			}
		}
		if(f==1)
		{
			cout<<"CON EL HACHA RECOLECTASTE MADERA, CUANDO TALASTE ALGUNAS PALMERAS SE CAYERON COCOS Y TIENES ALIMENTO."<<endl;
			cout<<"SUBE TU NIVEL DE SALUD, HAMBRE, AGUA Y ENERGIA. "<<endl;
			if(c==1)
			{
				cout<<"(SALUD 5/10), (HAMBRE 4/10), (AGUA 10/10), (ENERGIA 4/10). "<<endl;
			}
			if(c==2)
			{
				cout<<"(SALUD 7/10), (HAMBRE 10/10), (AGUA 10/10), (ENERGIA 5/10). "<<endl;
			}
			if(c==3)
			{
				cout<<"(SALUD 6/10), (HAMBRE 10/10), (AGUA 10/10), (ENERGIA 7/10). "<<endl;
			}
		}
	}
	
	int h,j,m;
	float k[3],l=0;
	cout<<" "<<endl;
	cout<<"PASARON UNOS DIAS Y TE PUDSTE CREAR UN REFUJIO CON MADERAS Y HOJAS. "<<endl;
	cout<<"(SALUD 6/10), (HAMBRE 7/10), (AGUA 9/10), (ENERGIA 6/10). "<<endl;
	cout<<" "<<endl;
	cout<<"LLEGO EL DIA EN SABER QUE FUE LO QUE SUCEDIO Y PORQUE ESTAS EN ESTA ISLA. "<<endl;
	cout<<"HACE UNOS DIAS HABIAS VISTO UN HUMO QUE ESTABA CERCA DEL AVION CAIDO. "<<endl;
	cout<<"PUEDES IR A INVESTIGAR AL HUMO (1). O IR A VER EL AVION (2). "<<endl;
	do{
		cin>>h;
		if(h!=1 && h!=2){
			cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) O (2)"<<endl;
		}
	}
	while(h!=1 && h!=2);
	system("cls");
	if(h==1)
	{
		cout<<"LLEGAS AL LUGAR Y EL HUMO PROVENIA DE UNA FOGATA, EMPIEZAS A PREGUNTAR SI HAY ALGUIEN Y APARECE UNA PERSONA. "<<endl;
		cout<<"LA PERSONA NO PARESE ESTAR BIEN PSICOLOGICAENTE E INTENTA ATACARTE. "<<endl;
		cout<<"TRARAS DE TRANQUILIZARLA Y HACERLE ENTENDER LO QUE SUCEDE. "<<endl;
		cout<<"LA PERSONA TE ATACA IGUAL, CON UN CUCHILLO "<<endl;
		cout<<"PARA ESQUIVAR EL ATAQUE,ASI NO TE ACUCHILLA, PUEDES HACER UN ROL PARA LA DERECHA (1). O PARA LA IZQUIERDA (2). "<<endl;
		do{
			cin>>j;
			if(j!=1 && j!=2){
				cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) O (2)"<<endl;
			}
		}
		while(j!=1 && j!=2);
		system("cls");
		if (j==1)
		{
			cout<<"ESQUIVASTE EL GOLPE, AHORA ES TU TURNO DE PEGAR. "<<endl;
			cout<<"(SALUD 6/10), (HAMBRE 7/10), (AGUA 8/10), (ENERGIA 5/10). "<<endl;
		}
		if (j==2)
		{
			cout<<"NO HAS ESQUIVADO EL GOLPE, TE BAJA VIDA PORQUE TE CLAVO EL CUCHILLO. AHORA ES TU TURNO DE PEGAR. "<<endl;
			cout<<"(SALUD 4/10), (HAMBRE 7/10), (AGUA 8/10), (ENERGIA 5/10). "<<endl;
		}
		//agregar mas texto para que agarre forma.
		cout<<" "<<endl;
		cout<<"PARA DERROTAR AL ENEMIGO SE TIENE QUE CARGAR TRES VALORES DIFERENTES CON LOS NIVELES DE ENERGIA QUE VAS A USAR. (RECUERDE QUE TIENE 5 DE ENERGIA Y NO PODES LLEGAR A TENER 0). "<<endl;
		for (int i=0;i<3;i++)//HACERLO FUNCION.............................................................................................
		{
			do{
				cin>>k[i];
				if(k[i]>5){
					cout<<"NO PUDE INGRESAR VALORES MAYORES A 5. "<<endl;
				}
			}
			while(k[i]>5);
			l=l+k[i];
		}
		if (l>3.5)
		{
			cout<<"LO HAS DERROTADO. "<<endl;
		}
		if (l<3.5)
		{
			cout<<"NO HAS COLOCADO LA ENERGIA SUFICIENTE, PERO PUDISTE DERROTAR A LA PERSONA HACIENDO QUE TE HAGA DAÑO. "<<endl;
		}
		cout<<" "<<endl;
		cout<<"UNA VEZ DERROTADO TE PONES A HURGAR LAS COSAS QUE TENIA, Y ENCUENTREAS DIFERENTES HERRAMIENTAS UTILES, AGUA, COMIDA Y UN PLANO DE UN BOTE. "<<endl;
		cout<<"SE TE OCURRE LA IDEA DE IR AL AVION CAIDO. PERO EL AVON EXPLOTA Y QUEDA LA ZONA SIN PODER ACCEDER POR LA CONTAMINACION. "<<endl;
		cout<<" "<<endl;
	}
	if(h==2)
	{
		cout<<"LUEGO DE UN RATO CAMINANDO LLEGAS AL LUGAR DEL ACCIDENTE. Y TRATAS DE VER SI HAY RASTROS DE ALGUN SUPERVIVIENTE. "<<endl;
		cout<<"EN EL AVION ESTA EL LLAMAS A PUNTO DE EXPLOTAR, ASI QUE TIENES LA OPCION DE VOLVER A TU REFUGIO (1). O VER EN QUE CONSISTE EL HUMO QUE HABIAS VISTO HACE UNOS DIAS (2). "<<endl;
		do{
			cin>>m;
			if(m!=1 && m!=2){
				cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) O (2)"<<endl;
			}
		}
		while(m!=1 && m!=2);
		system("cls");
		if(m==1)
		{
			cout<<"VOLVIENDO AL REFUGIO TE ENCUNETRAS CON UNAS HUELLAS DE PERSONA EN EL PISO. "<<endl;
			cout<<"LAS SIGUES HASTA QUE TE ENCUENTRAS CON UNA FOGATA DE DONDE PROVENIA EL HUMO "<<endl;
		}
		if(m==2)
		{
			cout<<"CUANDO LLEGAS AL LUGAR TE DAS CUENTA DE QUE EL HUMO PROVENIA DE UNA FOGATA. "<<endl;
		}
		cout<<"EN EL LUGAR EMPIEZAS A BUSCAR Y ENCUENTRAS DIFERENTES HERRAMIENTAS, AGUA, COMIDA Y UN PLANO DE UN BOTE "<<endl;
		cout<<"TE ACERCAS A LA COSTA Y VES MARCAS EN LA ARENA DE QUE SE ARRASTRO UN BOTE. "<<endl;
		cout<<"POR LO TANTO LA PERSONA QUE HABIA SOVREVIVIDO SE HABIA IDO. "<<endl;
		cout<<"ESCUCHAS COMO EXPLOTA EL AVION Y QUEDA LA ZONA SIN PODER ACCEDER POR LA CONTAMINACION. "<<endl;
	}
	
	int r;
	cout<<" "<<endl;
	cout<<"AL PASAR LOS DIAS, TIENES HAMBRE Y A LO LEJOS VES UN ANIMAL QUE PUEDES CAZAR. "<<endl;
	cout<<"PARA DERROTARLO TIENES 3 ATAQUES DIFERENTES. "<<endl;
	cout<<"(1) LANZAR UNA PIEDRA. (2) PEGARLE CON EL HACHA. (3) PEGARLE CON LA LANZA. "<<endl;
	cout<<"TIENES 6 INGRESOS DE ATAQUES (1,2 o 3) "<<endl;
	peleanimal();//FUNCION
	if (r>40)
	{
		cout<<"HAS DERROTADO AL ANIMAL, TU NIVEL DE HAMBRE Y SALUD SUBEN. "<<endl;
	}
	if (r<40)
	{
		cout<<"NO HAS DERROTADO AL ANIMAL, TIENES QUE HUIR. "<<endl;
	}
	
	char e1[4][10],temp[10];
	cout<<"CUANDO VUELVES AL REFUJIO, TE PONES A PENSAR EN LO SOLO QUE TE ENCUENTRAS Y QUE NECESITAS ALGUNA COMPAÑIA "<<endl;
	cout<<"ENTONCES SE TE OCURRE HACERTE AMIGO DE UNAS PIEDRAS. "<<endl;
	cout<<"UNA VEZ DECORADAS TIENES QUE ELEJIR LOS NOMBRES DE LAS 4 PIEDRAS "<<endl;
	cout<<"INGRESE 4 NOMBRES QUE DESEAS PONERLE A  LAS PIEDRAS "<<endl;
	for(int i=0;i<4;i++){
		cin>>e1[i];
	}
	for(int i=0;i<4;i++){ //ordenamiento de nombres
		for(int j=i;j<4;j++){
			if(strcmp(e1[i],e1[j])>0){
				strcpy(temp,e1[i]);
				strcpy(e1[i],e1[j]);
				strcpy(e1[j],temp);
			}
		}
	}
	cout<<"PARA ACOMODARLAS DECIDES PONERLAS EN ORDEN ALFABETICO "<<endl;
	cout<<"LOS NOMBRES DE LAS PIEDRAS ORDENADAS SON "<<endl;
	for(int i=0;i<4;i++){
		cout<<e1[i]<<endl;
	}
	
	
	int t,a1,d1,c1;
	cout<<"LUEGO DE VARIOS DIAS EN LA ISLA SIN SEÑALES DE QUE TE VAYAN A RESCATAR, DECIDES UTILIZAR EL PLANO DEL BOTE PARA CREAR UNO. "<<endl;
	cout<<"OBSERVANDO EL PLANO TE DAS CUENTA DE QUE SE NECESITAN MUCHOS MATERIALES "<<endl;
	cout<<"PARA ELLO VAS A TENER QUE PASAR UNOS DIAS CONSTRUYENDOLO "<<endl;
	cout<<"EN PRIMER LUGAR VAS A TENER QUE CONSEGUIR TODOS LOS MATERIALES. "<<endl;
	recolectar();
	cout<<"EN SEGUNDO LUGAR VAS A TENER QUE CONSTRUIR EL BOTE "<<endl;
	cout<<"PARA ELLO TIENES QUE COMPROBAR SI TIENES TODOS LOS MATERIALES. "<<endl;
	cout<<"PARA LA CONSTRUCCION DEL BOTE NECESITAS 90 DE MADERA, 40 DE PAJA Y 75 LIANAS "<<endl;
	
	cout<<"INGRESE LA CANTIDAD DE MADERAS QUE HABIAS COSECHADO "<<endl;
	cin>>t;
	int u=buscaru(s,t);
	
	if(u== -1){
		cout<<"ES INCORRECTO, USTED RECOLECTO "<<s[0]<<" MADERAS "<<endl;
	}
	else{
		if(u==0){
			cout<<"ES CORRECTO "<<endl;
		}
		if(u==1){
			cout<<"INGRESO LA CANTIDAD DE PAJA. USTED RECOLECTO "<<s[0]<<" MADERAS "<<endl;
		}
		if(u==2){
			cout<<"INGRESO LA CANTIDAD DE LIANAS. USTED RECOLECTO "<<s[0]<<" MADERAS "<<endl;
		}
	}
	
	cout<<"INGRESE LA CANTIDAD DE PAJA QUE HABIAS COSECHADO "<<endl;
	cin>>x;
	int v=buscarv (s,x);
	
	if(v== -1){
		cout<<"ES INCORRECTO, USTED RECOLECTO "<<s[1]<<" PAJAS "<<endl;
	}
	else{
		if(v==1){
			cout<<"ES CORRECTO "<<endl;
		}
		if(v==0){
			cout<<"INGRESO LA CANTIDAD DE MADERA. USTED RECOLECTO "<<s[1]<<" PAJAS "<<endl;
		}
		if(v==2){
			cout<<"INGRESO LA CANTIDAD DE LIANAS. USTED RECOLECTO "<<s[1]<<" PAJAS "<<endl;
		}
	}
	
	cout<<"INGRESE LA CANTIDAD DE LIANAS QUE HABIAS COSECHADO "<<endl;
	cin>>y;
	int w=buscarw (s,y);
	
	if(w== -1){
		cout<<"ES INCORRECTO, USTED RECOLECTO "<<s[2]<<" LIANAS "<<endl;
	}
	else{
		if(w==2){
			cout<<"ES CORRECTO "<<endl;
		}
		if(w==1){
			cout<<"INGRESO LA CANTIDAD DE PAJA. USTED RECOLECTO "<<s[2]<<" LIANAS "<<endl;
		}
		if(w==0){
			cout<<"INGRESO LA CANTIDAD DE MADERA. USTED RECOLECTO "<<s[2]<<" LIANAS "<<endl;
		}
	}
	
	do{
		if (s[0]<90){
			cout<<"NO TIENES LA CANTIDAD DE MADERA NECESARIA, POR LO TANTO TIENES QUE IR A CONSEGUIR MAS "<<endl;
			cout<<"INGRESE LA CANTIDAD DE MADERA QUE VAS A RECOLECTAR "<<endl;
			cin>>a1;
			system("cls");
			s[0]=s[0]+a1;
		}
		if (s[1]<40){
			cout<<"NO TIENES LA CANTIDAD DE PAJA NECESARIA, POR LO TANTO TIENES QUE IR A CONSEGUIR MAS "<<endl;
			cout<<"INGRESE LA CANTIDA DE PAJA QUE VAS A RECOLECTAR "<<endl;
			cin>>d1;
			system("cls");
			s[1]=s[1]+d1;
		}
		if (s[2]<75){
			cout<<"NO TIENES LA CANTIDAD DE LIANAS NECESARIA, POR LO TANTO TIENES QUE IR A CONSEGUIR MAS "<<endl;
			cout<<"INGRESE LA CANTIDA DE LIANAS QUE VAS A RECOLECTAR "<<endl;
			cin>>c1;
			system("cls");
			s[2]=s[2]+c1;
		}
	}
	while (s[0]<90 && s[1]<40 && s[2]<75);
	
	cout<<"TENIENDO TODOS LOS MATERIALES NECESARIOS PARA EL BOTE, PASAS DOS DIAS CONSTRUYENDOLO "<<endl;
	cout<<"UNA VEZ TERMINADA LA EMBARCACION, TIENES QUE PREPARARTE PARA PARTIR. PARA ELLO TIENES QUE GUARDAR EN EL BOTE DIFERENTES SUMINISTROS "<<endl;
	cout<<"CONTINUARA..."<<endl;
	
	
	return 0;
}


//FUNCIONES:

int pescar(int e){
	do{
		unsigned int d=0;
		srand(unsigned(time(0)));
		d=rand()%(7-1);
		if (d>1)
		{
			cout<<"LUEGO DE UN GRAN RATO PESCANDO, OBTUVISTE "<<d<< " PECES. "<<endl;
			cout<<"DESEA PEZCAR UNA VEZ MAS ? (1 PARA SI), (2 PARA NO)"<<endl;
			do{
				cin>>e;
				if(e!=1 && e!=2){
					cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) O (2)"<<endl;
				}
			}
			while(e!=1 && e!=2);
			system("cls");
		}
		if (d==1)
		{
			cout<<"TUVISTE MALA SUERTE, OBTUVISTE 1 PEZ. PERO TE ALCANZA PARA SOBREVIVIR"<<endl;
			cout<<"DESEA PEZCAR UNA VEZ MAS ? (1 PARA SI), (2 PARA NO) "<<endl;
			do{
				cin>>e;
				if(e!=1 && e!=2){
					cout<<"SOLO SE PUEDE INGRESAR EL NUMERO (1) O (2)"<<endl;
				}
			}
			while(e!=1 && e!=2);
			system("cls");
		}
	}
	while (e!=2); //corte con un contador para un maximo de pescadas
}

int azarcomida(){
	unsigned int g=0;
	srand(unsigned(time(0)));
	g=rand()%(4-1);//AZAR PARA VER CUANTO LE SUBE LA COMIDA.
}

int peleanimal(){
	int n[6],o=0,p=0,q=0,r=0;
	for(int i=0;i<6;i++)
	{
		cin>>n[i];
	}
	for (int i=0;i<6;i++)
	{
		if(n[i]==1)
		{
			o=o+4;
		}
		if(n[i]==2)
		{
			p=p+12;
		}
		if(n[i]==3)
		{
			q=q+16;
		}
	}
	r=o+p+q;
	return r;
}

void recolectar(){
	cout<<"LOS MATERIALES QUE NECESITAS SON: "<<endl;
	cout<<"MADERA, PAJA Y LIANAS, "<<endl;
	for(int i=0;i<3;i++){
		if(i==0){
			cout<<"INGRESE LA CANTIDAD DE MADERA QUE VAYA A RECOLECTAR "<<endl;
		}
		if(i==1){
			cout<<"INGRESE LA CANTIDAD DE PAJA QUE VAYA A RECOLECTAR "<<endl;
		}
		if(i==2){
			cout<<"INGRESE LA CANTIDAD DE LIANAS QUE VAYA A RECOLECTAR "<<endl;
		}
		cin>>s[i];
		system("cls");
	}
}

int buscaru(int s[3],int t){
	for(int i=0;i<3;i++){
		if(t==s[i]){
			return i;
		}
	}
	return -1;
}

int buscarv(int s[3],int t){
	for(int i=0;i<3;i++){
		if(x==s[i]){
			return i;
		}
	}
	return -1;
}

int buscarw(int s[3],int t){
	for(int i=0;i<3;i++){
		if(y==s[i]){
			return i;
		}
	}
	return -1;
}

//usar plano de bote para irte. cuando te vas, ves un helicoptero que va a la zona del accidente pero vos estas lejos. vas en bote algun lugar(deciciones de que tiene que hacer arriba del bote, se puede morir ya que es el fin del juego)
