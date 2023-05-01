#include "bits/stdc++.h"
using namespace std;

long long memito[5+100]={};

long long funcion(long long n){
    if(n==0){
        return 1;
    }
    if(memito[n+50]!=0){
        return memito[n+50];
    }
    if(n<0){
        return memito[n+50]=funcion(-(n))+ funcion(n+1)+ 2;
    }

    return memito[n+50]= funcion(-n+1)+1;

}
int funcion(){
    long long n;
    cin>>n;
    cout<<funcion(n);
    return 0;
}