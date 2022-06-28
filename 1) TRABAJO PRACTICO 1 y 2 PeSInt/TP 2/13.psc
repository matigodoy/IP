Algoritmo trece
	Escribir "ingrese la cant de kilos de manzanas "
	Leer k
	Escribir "precio del kilo de manzana "
	leer c
	
	si k>-1.99 y k<2.01
		Escribir "total a pagar ",c*k
	FinSi
	
	si k>2 y k<5.01
		Escribir "total a pagar ",(c*k)*0.90
	FinSi
	
	si k>5 y k<10.01
		Escribir "total a pagar ",(c*k)*0.85
	FinSi
	
	si k>10
		Escribir "total a pagar ",(c*k)*0.80
	FinSi
FinAlgoritmo
