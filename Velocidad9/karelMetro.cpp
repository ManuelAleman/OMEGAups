#include "bits/stdc++.h"
using namespace std;

int karel(){
    int n, suma;
    cin>>n>>suma;
    int x, total=0;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        total+=x;
    }

    if(total!=suma){
        cout<<"Original";
    }else{
        cout<<"Es falso";
    }
    return 0;
}