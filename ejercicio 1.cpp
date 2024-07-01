#include<iostream>
using namespace std;
int main(){
     int c,a,n,d,b,i;
     cout<<"ingrese la capacidad de los elementos. ";cin>>n;
     int n[a];
     for(i=1;i<=n;i++){
        
        cout<<"ingrese e los numeros el primer elemento :";cin>>n[i];
            b=b+n[i];
        if(i==0){
            c=c+1;
        }
     }
     
     d=(c*100)/n;
     cout<<"la suma es :"<<b;
     cout<<"el porcentaje es "<<d;




    return 0;
}