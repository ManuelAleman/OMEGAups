#include "bits/stdc++.h"
using namespace std;
int triangulocons(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a){
        cout<<"SI";
    }else{
        cout<<"NO";
    }
    return 0;
}