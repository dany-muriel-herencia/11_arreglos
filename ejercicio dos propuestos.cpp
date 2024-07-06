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


    return 0;
}

