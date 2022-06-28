Algoritmo diez
	contador<-0
	acumulador1<-0
	acumulador2<-0
	
	Repetir
		Escribir "precione 1 para lanzar el dado (0 para termianr)"
		Leer tirada
		si tirada=1
			n<-azar(7)
			contador <- contador +1
			Escribir n
			si n=1
				acumulador1 <- acumulador1 +1
			FinSi
			si n=6
				acumulador2 <- acumulador2+1
			FinSi
		FinSi
		
	hasta que tirada=0
	
	Escribir "total de tiradas ",contador
	Escribir "total de unos ", acumulador1
	Escribir "total de seis ", acumulador2
	
	
	
	
FinAlgoritmo
