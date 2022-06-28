Algoritmo sin_titulo
	pos<-0
	neg<-0
	cer<-0
	
	Repetir
		
	Escribir "ingrese el numero (999 para finalizar)"
	Leer n
	si n>0
		Escribir "es positivo "
		pos<- pos+1
	FinSi
	si n<0
		Escribir "es negativo "
		neg<- neg+1
	FinSi
	si n=0
		Escribir "es cero "
		cer<- cer+1
	FinSi
	
Hasta Que n=999
	
	Escribir "cant de positivos ", pos
	Escribir "cant de negativos ", neg
	Escribir "cant de ceros ", cer
	
FinAlgoritmo
