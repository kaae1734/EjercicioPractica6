/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>

using namespace std;

int main() {
    int filas, columnas;

    // Pedir al usuario que ingrese las dimensiones de la matriz
    cout << "Ingrese las dimensiones de la matriz (filas x columnas): ";
    cin >> filas >> columnas;

    // Declarar la matriz original y la matriz transpuesta
    int matrizOriginal[filas][columnas];
    int matrizTranspuesta[columnas][filas];

    // Pedir al usuario que ingrese los elementos de la matriz original
    cout << "Ingrese los elementos de la matriz original:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrizOriginal[i][j];
        }
    }

    // Calcular la transposición de la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizTranspuesta[j][i] = matrizOriginal[i][j];
        }
    }

    // Mostrar la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}