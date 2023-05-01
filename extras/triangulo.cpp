#include "bits/stdc++.h"
using namespace std;

int triangulo2() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int x, y, z;
        cin>>x >> y >> z;
        if(x==y && y==z){
            cout<<"equilatero";
        }else if(x!=y && y!=z){
            cout<<"escaleno";
        }else{
            cout<<"isosceles";
        }

    return 0;
}