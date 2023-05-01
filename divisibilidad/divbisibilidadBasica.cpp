#include <bits/stdc++.h>
using namespace std;

int divibasica(){
    unsigned long long n;
    while(cin>>n){
        if(n%2==0){
            cout<<"2 ";
        }else{cout<<"- ";}
        if(n%3==0){
            cout<<"3 ";
        }else{cout<<"- ";}
        if(n%4==0){
            cout<<"4 ";
        }else{cout<<"- ";}
        if(n%5==0){
            cout<<"5 ";
        }else{cout<<"- ";}
        if(n%6==0){
            cout<<"6 ";
        }else{cout<<"- ";}
        cout<<"\n";
    }
    return 0;
}
