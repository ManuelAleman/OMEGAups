#include "bits/stdc++.h"
using namespace std;
int mayusPAr(){
    string palabra, newW;
    cin>>palabra;
    for (int i = 0; i < palabra.length(); ++i) {
        char x=palabra.at(i);
        if(i%2==0){
            x=toupper(x);
        }
        newW +=x;
    }

    cout<<newW;
    return 0;
}