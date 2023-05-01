#include "bits/stdc++.h"
using namespace std;

int modaGCF(){
    int n;
    cin>>n;

    map<int, int>moda;
    int aparicion=0;
    int mayor =0;
    for (int i = 0; i < n; ++i) {
        int l;
        cin>>l;

        if(moda.find(l)==moda.end()){
            moda[l]=1;
        }else{
            moda[l]++;
        }

        if(moda[l]>aparicion){
            aparicion = moda[l];
            mayor=l;
        }
    }

    cout<<mayor;
}