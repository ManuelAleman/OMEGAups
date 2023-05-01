#include "bits/stdc++.h"

using namespace std;

unsigned long long memi[5+10004]={};

unsigned long long fct(unsigned long long x,unsigned long long y){
    if(y<=2){
        return x+y;
    }
    if(memi[y]==0){
        unsigned long long result = x + fct(x, y - 1) + 5 * (fct(x, y - 2));
        memi[y]= result;
    }
    return memi[y];

}


int evaluandoFctrara(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n=0;
    unsigned long long x=0, y=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>x>>y;
        memset(memi,0,sizeof memi);
        cout<<fct(x,y)<<"\n";
    }


    return 0;
}
