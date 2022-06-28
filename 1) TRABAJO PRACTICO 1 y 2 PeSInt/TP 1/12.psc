Algoritmo doce
	os<-0
	ef<-0
	Repetir
	Escribir "forma de pago (1 para obra social) (2 para efectivo) CERO PARA FINALIZAR"
	leer f
	Si f=1
		Escribir "Dinero ingresado (obra social) "
		Leer d1
		os<- os+d1
	Fin Si
	si f=2
		Escribir "Dinero ingresado (efectivo) "
		Leer d2
		ef<- ef+d2
	FinSi
Hasta Que f=0

Escribir "dinero con obra social ",os
Escribir "dinero con efectivo ", ef
Escribir "dinero total ",os+ef
	
	
FinAlgoritmo
