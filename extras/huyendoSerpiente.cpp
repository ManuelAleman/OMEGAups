#include "bits/stdc++.h"
using namespace std;
int huyendoSerp(){

    char animal;
    int metros;

    cin>>animal>>metros;

    if(animal!='s'){
        cout<<"estas a salvo!";
    }else{
        if(metros>=10){
            cout<<"retrocede y busca otro camino";
        }else{
            cout<<"corre, corre por tu vida!";
        }
    }
    return 0;
}