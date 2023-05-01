#include "bits/stdc++.h"

using namespace std;
int memo[5+100]={};
int contador=0;
int funcion1(int a, int b, int c,int* contador){
    (*contador)++;
    if(min(min(a,b),c)<=3){
        return a+(2*b)+(3*c);
    }
    if(memo[min(min(a,b),c)]>3 or a+b+c==100){
        int result =0;
        return memo[min(min(a,b),c)]=result;
    }
    return memo[memo[min(min(a,b),c)]] = funcion1(a-1,b-1,c-1,contador)+(funcion1(a,b-3,c-3,contador))+(funcion1((a/2),b,c,contador));

}
int contmemoiza(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<funcion1(a,b,c, &contador)<<" "<<contador;
    return 0;
}