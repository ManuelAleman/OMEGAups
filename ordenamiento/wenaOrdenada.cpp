#include <iostream>
#include <map>
#include <string>

using namespace std;
int wenaordenada() {
    map<char,int> mapa;
    string oracion;
    getline(cin,oracion);

    for(int i=0;i<oracion.length();i++){
        if(oracion.at(i)==' '){ continue;}
        char letra = tolower(oracion.at(i));
        if(mapa.find(letra)==mapa.end()){
            mapa[letra] = 1;
        }
        else{
            mapa[letra]++;
        }
    }
    map<char,int>:: iterator iterator;
    for(iterator=mapa.begin(); iterator != mapa.end(); iterator++){
        char letra = iterator->first;
        int cont = iterator->second;
        cout<<cont<<" ";
    }

    return 0;
}
