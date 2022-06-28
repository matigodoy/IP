Algoritmo sin_titulo
	Escribir "cargue la edad del socio "
	leer nro1
	si nro1<15
		Escribir "socio infantil ($10) "
	FinSi
	si nro1>=15 y nro1<21
		Escribir "socio cadete ($15) "
	FinSi
	si nro1>50
		Escribir "entra gratis "
	FinSi
	si nro1>=21 y nro1<=50
		Escribir "socio activo ($20) "
	FinSi
FinAlgoritmo
