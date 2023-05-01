#include "bits/stdc++.h"
using namespace std;

int divi11(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    unsigned long long x;
    cin>>n;
    vector<unsigned long long>numeros;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        numeros.push_back(x);
    }

    for (int i = 0; i < numeros.size(); ++i) {
        if(numeros.at(i)%11==0){
            cout<<"El número "<<numeros.at(i)<<" es divisible por 11"<<endl;
        }else{
            cout<<"El número "<<numeros.at(i)<<" no es divisible por 11"<<endl;
        }
    }
    return 0;
}