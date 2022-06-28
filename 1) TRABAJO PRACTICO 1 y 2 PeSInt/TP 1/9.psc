Algoritmo sin_titulo
	Escribir "cantidad de km a recorrer "
	leer nro1
	escribir "precio litro de combustible "
	Leer nro2
	Escribir "precio del peaje "
	Leer nro3
	total<-total+(((nro1*nro2)/13)+(nro3*2))*2
	si nro1>500
		Escribir "TOTAL + $50 "
		mostrar total+50
	SiNo
		escribir "TOTAL "
		Mostrar total
	FinSi
FinAlgoritmo
