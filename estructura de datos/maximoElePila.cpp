#include "bits/stdc++.h"
using namespace std;

int maxiEnPila(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    stack<int> pila;
    stack<int> aux;
    int n, maximo = INT_MIN;
    cin>>n;

    for (int i = 0; i < n; ++i) {
        int preg;
        cin>>preg;
        if(preg==1){
            int num;
            cin>>num;
            pila.push(num);
            maximo = max(maximo, num);
            aux.push(maximo);
        }else if(preg==2){
            pila.pop();
            aux.pop();
            if(aux.empty()){
                maximo = INT_MIN;
            }
        }else{
            cout<<aux.top()<<"\n";
        }
    }
    return 0;
}