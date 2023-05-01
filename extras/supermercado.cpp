#include "bits/stdc++.h"
using namespace std;

bool compare(pair<string, float> a, pair<string , float>b){
    return a.second>b.second;
}

void uti(map<string, float>map1){
    vector<pair<string, float>>aux;

    for(auto a: map1){
        aux.push_back(a);
    }

    sort(aux.begin(), aux.end(), compare);
    double total=0;
    int cont=1;
    for(auto i: aux){
        cout<<cont<<" | "<<i.first<<" | "<<i.second<<endl;
        total+=i.second;
        cont++;
    }

    cout<<total;
}
int supermercado(){
    int n;
    cin>>n;
    map<string, float> ticket;

    for (int i = 0; i < n; ++i) {
        string nombre;
        float precio;
        cin>>nombre>>precio;
        ticket[nombre]= precio;
    }
    uti(ticket);
    return 0;
}