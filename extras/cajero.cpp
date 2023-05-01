#include "bits/stdc++.h"
using namespace std;

int cajero(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int saldo=1000;
    char cajero = ' ';

    while(saldo!=0 && cajero!='S'){
        int monto;
        cin>>cajero;

        if(cajero=='C'){
            cout<<"$"<<saldo<<"\n";
        }else if(cajero =='D'){
            cin>>monto;
            saldo+=monto;
        }else if(cajero == 'R'){
            cin>>monto;
            saldo-=monto;
        }
    }

    return 0;
}