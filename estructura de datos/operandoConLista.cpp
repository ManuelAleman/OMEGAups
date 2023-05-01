#include "bits/stdc++.h"
using namespace std;

int opecList(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    list<int> lista;
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        lista.clear();
        cout << "Caso " << i+1 << ":" << "\n";
        int n;
        cin>>n;
        for (int j = 0; j < n; ++j) {
            int x,y;
            cin>>x;
            if(x==1){
                cin>>y;
                lista.push_front(y);
            }
            else if(x==2){
                cin>>y;
                lista.push_back(y);
            }
            else if(x==3){
                if(!lista.empty()){
                    lista.pop_front();
                }
            }
            else if(x==4){
                if(!lista.empty()){
                    lista.pop_back();
                }
            }

            int size = lista.size();
            if(size==0){
                cout<<"Lista vacia"<<"\n";
            }else{
                for (int ala: lista) {
                    cout<<ala<<" ";
                }
                cout<<"\n";
            }
        }

    }

    return 0;
}