/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

//Declaramos nuesta funcion principal
int main()
{
    //Declaramos variables
    float nota, suma = 0; // declaramos las variables nota y suma como flotantes, la variable suma iniciara en 0.

    //Iniciamos un ciclo For, para que el usuario ingrese las notas de los estudiantes
    for (int i = 1; i <= 10; i++){ 
        cout << "Ingresa la nota del estudiante"<< i << endl;
        cin >> nota;
        suma += nota; //En esta linea agregamos la nota del estudiante actual a la variable suma
    }
    //Imprimimos el promedio de la seccion
    //Realizamos la operacion para sacar el promedio
    float promedio = suma / 10;
    cout << "El promedio de la seccion equivale a:"<< promedio << endl;

    return 0;


}