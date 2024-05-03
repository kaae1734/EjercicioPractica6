Algoritmo ejercicio9PSeint
	Definir filas1, columnas1, filas2, columnas2, i, j, k Como Entero;
	Definir matriz1, matriz2, matriz_resultante Como Entero;
	
	Escribir "Ingrese el número de filas de la primera matriz: ";
	Leer filas1;
	Escribir "Ingrese el número de columnas de la primera matriz: ";
	Leer columnas1;
	
	Escribir "Ingrese el número de filas de la segunda matriz: ";
	Leer filas2;
	Escribir "Ingrese el número de columnas de la segunda matriz: ";
	Leer columnas2;
	
	Si columnas1 <> filas2 Entonces
		Escribir "Las dimensiones de las matrices no son compatibles para la multiplicación.";
	Sino
		Para i <- 1 Hasta filas1 Con Paso 1 Hacer
			Para j <- 1 Hasta columnas2 Con Paso 1 Hacer
				matriz_resultante <- 0;
			Fin Para
		Fin Para
		
		Para i <- 1 Hasta filas1 Con Paso 1 Hacer
			Para j <- 1 Hasta columnas1 Con Paso 1 Hacer
				Escribir "Ingrese el elemento (", i, ",", j, ") de la primera matriz: ";
				Leer matriz1;
			Fin Para
		Fin Para
		
		Para i <- 1 Hasta filas2 Con Paso 1 Hacer
			Para j <- 1 Hasta columnas2 Con Paso 1 Hacer
				Escribir "Ingrese el elemento (", i, ",", j, ") de la segunda matriz: ";
				Leer matriz2;
			Fin Para
		Fin Para
		
		Para i <- 1 Hasta filas1 Con Paso 1 Hacer
			Para j <- 1 Hasta columnas2 Con Paso 1 Hacer
				Para k <- 1 Hasta columnas1 Con Paso 1 Hacer
					matriz_resultante <- matriz_resultante + matriz1 * matriz2;
				Fin Para
			Fin Para
		Fin Para
		
		Escribir "La matriz resultante de la multiplicación es:";
		Para i <- 1 Hasta filas1 Con Paso 1 Hacer
			Para j <- 1 Hasta columnas2 Con Paso 1 Hacer
				Escribir matriz_resultante;
			Fin Para
			Escribir "";
		Fin Para
	Fin Si
FinAlgoritmo
