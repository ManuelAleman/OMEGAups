#include "bits/stdc++.h"
using namespace std;

int listaReservacion(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin>>n;
    unordered_map<string, string> reservaciones;
    unordered_map<string, string> repetidos;

    for (int i = 0; i < n; ++i) {
        string dia, mes, year, name;
        cin>> dia>> mes>> year>> name;
        string fecha = dia+" "+mes+" "+year;
        if(reservaciones.count(fecha)>0){
            repetidos[fecha]=name;
        }else{
            reservaciones[fecha]=name;
        }
    }

    cout<<repetidos.size()<<endl;
    for(auto r: repetidos){
        cout<<r.first<<" "<<r.second<<"\n";
    }

}