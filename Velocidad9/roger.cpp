#include "bits/stdc++.h"
using namespace std;
int roger(){
    float valor;
    vector<float> cali;
    for (int i = 0; i < 4; ++i) {
        cin>>valor;
        cali.push_back(valor);
    }
    float rog = cali[4-1];
    if(rog>cali[0] or rog>cali[1] or rog>cali[2]){
        cout<<"Pasaste a las nacionales";
    }else{
        cout<<"Lo siento parcero, no pasaste";
    }
    return 0;
}