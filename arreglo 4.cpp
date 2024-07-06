#include<iostream>
using namespace std;
void creciente(int a,int b);

int main(){

    int a,b;
    cout<<"indique el tamaño del arreglo : " ;cin>>a;
    cout<<"ingrese un digito : ";cin>>b;
    creciente(a,b);
    return 0;

}
void creciente(int a,int b){
    int c,d,g,j=0,arreglo[a];
    for(int i=0;i<a;i++){
        j++;
        arreglo[i]=j*b;
        cout<<"primer elemento  "<<i+1<<" : "<<arreglo[i]<<endl;
        
    }

}


