/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>//Biblioteca que ocupa funciones de entrada y salida

using namespace std;//Nos permite usar objetos y funciones como cout o cin

int main() {
    int n;
    cout << "Ingrese un numero natural: ";//Da un mensaje
    cin >> n;//guarda la info del mensaje

    int suma = 0;
    for (int i = 1; i <= n; ++i) { //Es un bucle
        suma += i;
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
