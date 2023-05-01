#include "bits/stdc++.h"
using namespace std;

int cafeteria1() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin >> n;

    unordered_map<string, list<string>::iterator>mapa;
    list<string> lista;
    list<string>::iterator it;

    for (int i = 0; i < n; ++i) {
        string evento, nombre, amigo;
        cin>>evento;
        if(evento[0]=='L'){
            cin>>nombre;
            lista.push_back(nombre);
            mapa[nombre]=--lista.end();
        }else if(evento[0]=='M'){
            cin>>amigo>>nombre;
            it = mapa[nombre];
            it= lista.insert(++it, amigo);
            mapa[amigo]= it;
        }
        else{
            cout<<lista.front()<<"\n";
            lista.pop_front();
        }
    }

    return 0;
}
