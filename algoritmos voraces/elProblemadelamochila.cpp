#include <bits/stdc++.h>
using namespace std;

int loca1(){
    vector<tuple<double, double, double>> datos;
    int aux=0;
    double n,c, res=0;
    cin>>n>>c;

    for(int i=0;i<n;i++){
        double p,v, indice;
        cin>>p>>v;
        indice = v/p;
        datos.push_back({indice, v, p});
    }

    sort(datos.rbegin(), datos.rend());

    while(c>0){
        auto[indice, va, pe]= datos[aux];
        if(c>pe){
            res = res+ va;
            c-=pe;
        }else{
            res = res + va*(c/pe);
            c=0;
        }
        aux++;
    }
    cout<<fixed<<setprecision(2)<<res;

    return 0;
}