#include "bits/stdc++.h"
using namespace std;

int ordenaNum1() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> numeros;
    int m;
    for (int i = 0; i < 4; ++i) {
        cin>>m;
        numeros.push_back(m);
    }
    sort(numeros.begin(), numeros.end());
    for(int a:numeros){
        cout<<a<<" ";
    }

    return 0;
}