#include "bits/stdc++.h"

using namespace std;

int filaB(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    queue<char> banco;
    for (int i = 0; i < n; ++i) {
        char l;
        cin>>l;
        if(l=='E'){
            banco.push(l);
        }else if(l=='N'){
            if(banco.size()>4){
                cout<<"no espera\n";
                continue;
            }else{
                cout<<"espera\n";
                banco.push(l);
            }
        }
        else if(l=='F'){
            banco.pop();
        }
    }

    return 0;
}