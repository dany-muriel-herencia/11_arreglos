#include<iostream>
using namespace std;
int main(){
    int b, g = 0, e = 0; 

    int temperaturaminima[7];
    int temperaturamaxima[7];
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
}