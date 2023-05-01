#include "bits/stdc++.h"
using namespace std;

int contandoAEIOU(){
    string word;
    cin>>word;
    char aux;
    int contV=0;
    for (int i = 0; i < word.length(); ++i) {
        aux=word[i];
        if(aux=='a' or aux=='e' or aux=='i' or aux=='o' or aux=='u' or aux=='A' or aux=='E' or aux=='I' or aux=='O' or aux=='U'){
            contV++;
        }
    }

    cout<<word.length()<<"\n";
    cout<<contV<<"\n";
    std::reverse(word.begin(), word.end());
    cout<<word;
    return 0;
}