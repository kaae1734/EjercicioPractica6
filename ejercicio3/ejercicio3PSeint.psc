Proceso ejercicio_3
	// Escriba el programa para calcular la suma de los cuadrados de los números entre 1 y 100.
	Definir sumaNaturales, numeroNaturales Como Entero;//definimos variables
	sumaNaturales <- 0;//aqui le damos un valor a la suma para que empiece desde 0
	
	Para numeroNaturales <- 1 Hasta 100 Con Paso 1 Hacer//aqui le decimos a la funcion Para "bucle" que empiece desde 1 y terminde desde 100 aumentandole 1 paso
		sumaNaturales <- sumaNaturales + numeroNaturales^2;//con esta formula hacemos que el valor actual se eleve al ^2 en cada iteracion
	FinPara
	
	Escribir "La suma de los cuadrados de los números entre 1 y 100 es: ", sumaNaturales;
	
FinProceso