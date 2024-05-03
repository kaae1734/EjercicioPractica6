/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

using namespace std;

int main() {
    int filasMatriz1, columnasMatriz1, filasMatriz2, columnasMatriz2;

    // Pedir al usuario que ingrese las dimensiones de las matrices
    cout << "Ingrese las dimensiones de la primera matriz (filas x columnas): ";
    cin >> filasMatriz1 >> columnasMatriz1;
    cout << "Ingrese las dimensiones de la segunda matriz (filas x columnas): ";
    cin >> filasMatriz2 >> columnasMatriz2;

    // Verificar si las dimensiones son compatibles para la multiplicación
    if (columnasMatriz1 != filasMatriz2) {
        cout << "Error: Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 1;
    }

    // Declarar las matrices
    int matriz1[filasMatriz1][columnasMatriz1];
    int matriz2[filasMatriz2][columnasMatriz2];
    int matrizResultado[filasMatriz1][columnasMatriz2];

    // Pedir al usuario que ingrese los elementos de las matrices
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filasMatriz1; i++) {
        for (int j = 0; j < columnasMatriz1; j++) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filasMatriz2; i++) {
        for (int j = 0; j < columnasMatriz2; j++) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz2[i][j];
        }
    }

    // Realizar la multiplicación de matrices
    for (int i = 0; i < filasMatriz1; i++) {
        for (int j = 0; j < columnasMatriz2; j++) {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < columnasMatriz1; k++) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Mostrar la matriz resultante
    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < filasMatriz1; i++) {
        for (int j = 0; j < columnasMatriz2; j++) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}