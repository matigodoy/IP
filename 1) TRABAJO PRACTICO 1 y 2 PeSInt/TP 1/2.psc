Algoritmo doS
	MASC<-0
	FEM<-0
	may<-0
	men<-999
	Repetir
		Escribir "INGRESE EL SEXO DE LA PERSONA (1 PARA MASCULINO) (2 PARA FEMENINO) "
		Leer a
		
			si a=1
				Escribir "ES MASCULINO "
				MASC<-MASC+1
			FinSi
			
			Si a=2
				Escribir "ES FEMENINO "
				FEM<-FEM+1
			FinSi
			
			
			Escribir "INGRESE LA EDAD DE LA PERSONA "
			Leer e
			mientras e>may hacer
				may<-e
			FinMientras
			
			mientras e<men Hacer
				men<-e
			FinMientras
		Escribir "TOTAL DE MASCULINOS ",MASC
		Escribir "TOTAL DE FEMENINOS ",FEM
		Escribir "EDAD MAYOR ",may
		Escribir "EDAD MENOR ",men
		
		
	Hasta Que a=0
	
FinAlgoritmo
