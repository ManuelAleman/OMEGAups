#include <bits/stdc++.h>
using namespace std;

bool comparar(int a,int b){
    if(to_string(a).size() < to_string(b).size()){
        return true;
    }else if(to_string(a).size() == to_string(b).size()){
        return a > b;
    }else{
        return false;
    }
}
int ordeCant(){
    int n;
    cin>>n;
    vector<int> cola;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cola.push_back(x);
    }

    sort(cola.begin(),cola.end(), comparar);
    for(int i = 0; i < cola.size(); i++) {
        cout<<cola[i]<<' ';
    }

}

