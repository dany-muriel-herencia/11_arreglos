#include<iostream>
using namespace std;

int main(){
    int n, d, b = 0, c = 0;

    cout << "Ingrese la capacidad de los elementos: ";
    cin >> n;

    int elementos[n];

    for(int i = 0; i < n; i++){
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> elementos[i];
        b += elementos[i];
        if(elementos[i] == 0){
            c += 1;
        }
    }

    d = (c * 100) / n;

    cout << "La suma es: " << b << endl;
    cout << "El porcentaje de ceros es: " << d << "%" << endl;

    return 0;
}