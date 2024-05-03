#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa el valor de n: ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}