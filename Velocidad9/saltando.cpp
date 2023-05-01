#include "bits/stdc++.h"
using namespace std;
int saltando(){
    string nombre;
    int n, x;
    getline(cin,nombre);
    cin>>n;
    int puntos=0;
    for (int i = 1; i <= n; ++i) {
        cin>>x;
        if(i%2==0 && x==2){
            puntos+=2;
        }else if(i%2!=0 && x==1){
            puntos++;
        }
        if(i%10==0){
            puntos*=i;
        }
    }
    cout<<"Nombre: "<<nombre<<"\n";
    cout<<"Saltos: "<<n<<"\n";
    cout<<"Puntos: "<<puntos;
    return 0;
}