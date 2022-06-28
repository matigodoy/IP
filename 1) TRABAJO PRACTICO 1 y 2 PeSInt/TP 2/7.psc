Algoritmo siete
	Escribir "ingrese numero de cuantro cifras"
	leer n
	
	mill = trunc(n/1000)
	cent = trunc((n- mill*1000)/100)
	dec = trunc((n - mill*1000-cent*100)/10)
	uni = trunc((n-mill*1000-cent*100-dec*10)/1)
	
	Escribir "millar ",mill
	Escribir "centena ",cent
	Escribir "decena ",dec
	Escribir "unidad ",uni
	Escribir "suma de cifras ",mill+cent+dec+uni
	
FinAlgoritmo
