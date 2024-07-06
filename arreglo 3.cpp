#include<iostream>
using namespace std;
int main(){
    int b, g = 0, e = 0; 
    int menor[1];
    int temperaturaminima[7];
    int temperaturamaxima[7];
    int temperaturapromedio[7];
    cout<<"ingrese la temperatura minima en grados celcius"<<endl;

    for (int i = 0; i < 7; ++i) {
        cout << "Ingrese la temperatura minima " << i + 1 << ": ";
        cin >> temperaturaminima[i];
    }
    cout<<"ingrese la temperatura maxima en grados celcius"<<endl;
    for(int k=0;k<7;k++){
       cout << "Ingrese la temperatura maxima " << k + 1 << ": ";
       cin >> temperaturamaxima[k];
    }
    
    for (int i = 0; i < 7; ++i) {
        temperaturapromedio[i] = (temperaturamaxima[i] + temperaturaminima[i])/2;
    }

    // Imprimir el resultado
    cout << "La temperatura promedio es: ";
    for (int i = 0; i < 7; ++i) {
        cout << temperaturapromedio[i] << " ";
    }
    menor[1]=23;
    for (int i = 0; i < 7; ++i) {
           
        if(temperaturaminima[i] < menor[1]){
            menor[1]=temperaturaminima[i];
        }
    }
    cout<<"la menor temperatura es "<<menor[1]<<endl;
    //la ultima funcion comparacion

    cout << "Ingrese una temperatura para comparar: ";
    cin >> e;
    bool encontrado = false;
    for (int i = 0; i < 7; ++i) {
        if (temperaturamaxima[i] == e) {
            cout << "El día " << i + 1 << " tiene una temperatura máxima de " << e << "°C" << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No hay ningún día con una temperatura máxima de " << e << "°C" << endl;
    }



    return 0;
    }
