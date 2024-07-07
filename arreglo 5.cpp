#include<iostream>
using namespace std;

int main() {
    int a, b, f = 0;  // Inicializar f a 0

    cout << "Nombres de los estudiantes de fundamentos de programacion:" << endl;
    cout << "Indique la cantidad de estudiantes: ";
    cin >> a;

    char estudiantes1[a][50];
    for(int i = 0; i < a; i++) {
        cout << "Ingrese el nombre numero " << i + 1 << ": ";
        cin >> estudiantes1[i];
    }

    cout << "Nombres de los estudiantes de programacion grafica:" << endl;
    cout << "Indique la cantidad de estudiantes: ";
    cin >> b;

    char estudiantes2[b][50];
    for(int k = 0; k < b; k++) {
        cout << "Ingrese el nombre numero " << k + 1 << ": ";
        cin >> estudiantes2[k];
    }

    // La cantidad máxima de comunes no puede ser mayor que el menor de los dos tamaños
    char comunes[(a < b) ? a : b][50];

    for(int j = 0; j < a; j++) {
        for(int k = 0; k < b; k++) {
            // Comparar cadenas manualmente
            bool iguales = true;
            for(int l = 0; l < 50; l++) {
                if(estudiantes1[j][l] != estudiantes2[k][l]) {
                    iguales = false;
                    break;
                }
                // Fin de cadena
                if(estudiantes1[j][l] == '\0' || estudiantes2[k][l] == '\0') {
                    break;
                }
            }
            if(iguales) {
                // Copiar cadena manualmente
                for(int l = 0; l < 50; l++) {
                    comunes[f][l] = estudiantes1[j][l];
                    if(estudiantes1[j][l] == '\0') {
                        break;
                    }
                }
                f++;
                break;  // Salir del bucle interno si se encontró un nombre común
            }
        }
    }

    if(f > 0) {
        cout << "Nombres comunes:" << endl;
        for(int y = 0; y < f; y++) {
            cout << comunes[y] << endl;
        }
    } else {
        cout << "No hay nombres comunes." << endl;
    }

    return 0;
}

