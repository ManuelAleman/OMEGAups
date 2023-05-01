#include "bits/stdc++.h"
using namespace std;

int primos2(){
    int x, div=2;
    vector<int>primos;
    cin>>x;

    while(x!=1){
        if(x%div==0){
            x/=div;
            primos.push_back(div);
        }else{
            div++;
        }
    }

    for(int num:primos){
        cout<<num<<"\n";
    }

    return 0;
}