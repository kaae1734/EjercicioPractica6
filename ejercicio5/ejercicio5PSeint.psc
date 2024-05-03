Algoritmo ejercicio_5
	//Para un grupo de clase de 8 estudiantes, realice un programa que
	//permita calcular y dar como salida lo siguiente:
	//-> Cantidad de alumnos aprobados
	//-> Cantidad de alumnos reprobados
	//-> Promedio general del grupo
	//Nota mínima para aprobar: 70
    Definir aprobados, reprobados, promedio, nota, contador Como Real;
    Definir sumaNotas Como Real;
    aprobados <- 0;  // Inicializamos la cantidad de aprobados en cero
    reprobados <- 0;  // Inicializamos la cantidad de reprobados en cero
    sumaNotas <- 0; // Inicializamos la suma total de notas en cero
    
    // Solicitamos las notas de los 8 estudiantes
    Para contador <- 1 Hasta 8 Con Paso 1 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        sumaNotas <- sumaNotas + nota;  // Sumamos la nota actual a la suma total de notas
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;  // Incrementamos la cantidad de aprobados
        Sino
            reprobados <- reprobados + 1; // Incrementamos la cantidad de reprobados
        FinSi
    FinPara
    
    // Calculamos el promedio general dividiendo la suma total de notas entre el número de estudiantes (8)
    promedio <- sumaNotas / 8;
    
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedio;
    
FinAlgoritmo

