#include "bits/stdc++.h"
using namespace std;
int fct(int x){
    if(x==0){
        return 1;
    }else if(x==1){
        return 1;
    }else{
        return fct(x-1)+2*(fct(x-2));
    }
}
int recursion3(){
    int x;
    cin>>x;
    cout<<fct(x);

    return 0;
}