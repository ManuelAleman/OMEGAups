#include "bits/stdc++.h"
using namespace std;

int masMenos() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    float a,b,c;
    cin>> a >> b >> c;
    if(a==0 or b==0){
        cout<<"Indefinido";
    }else if(c==0){
        cout<<fixed<<setprecision(6)<<(a/b)+c;
    }
    else{
        cout<<fixed<<setprecision(6)<<(a/b)+c<<" "<<(a/b)-c;
    }

    return 0;
}