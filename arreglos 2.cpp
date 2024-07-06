#include <iostream>
using namespace std;

int main() {
    int b, g = 0, e = 0; // Inicializamos g y e en 0
    cout << "Ingrese la capacidad de los elementos: ";
    cin >> b;

    int arreglo[b];
    int arreglo2[b];  
    int arreglo3[b];  

    for (int i = 0; i < b; ++i) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
        if (arreglo[i] % 2 == 0) {
            arreglo2[g++] = arreglo[i];  
        } else {
            arreglo3[e++] = arreglo[i];  
        }
    }
        cout << "Los elementos pares son: " << endl;
    for (int k = 0; k < g; ++k) {
        cout << "Elemento " << k + 1 << ": " << arreglo2[k] << endl;
    }

    cout << "Los elementos impares son: " << endl;
    for (int x = 0; x < e; ++x) {
        cout << "Elemento " << x + 1 << ": " << arreglo3[x] << endl;
    }


    return 0;
}

