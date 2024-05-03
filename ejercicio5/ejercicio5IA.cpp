/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>

using namespace std;

int main() {
    int notas[8]; // Arreglo para almacenar las notas de los 8 estudiantes
    int aprobados = 0; // Contador de alumnos aprobados
    int reprobados = 0; // Contador de alumnos reprobados
    int sumaNotas = 0; // Suma de todas las notas

    // Pedir al usuario que ingrese las notas de los 8 estudiantes
    cout << "Ingrese las notas de los 8 estudiantes:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        sumaNotas += notas[i]; // Sumar la nota al total
        if (notas[i] >= 70) {
            aprobados++; // Incrementar contador de aprobados
        } else {
            reprobados++; // Incrementar contador de reprobados
        }
    }

    // Calcular el promedio general del grupo
    float promedio = (float)sumaNotas / 8;

    // Mostrar los resultados
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}