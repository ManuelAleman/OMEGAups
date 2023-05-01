#include "bits/stdc++.h"
using namespace std;

int dibujaTache(){
    int n;
    cin>>n;
    char at= '@';

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || i + j == n - 1) {
                cout<<at;
            } else {
                cout<<' ';
            }
        }
        cout<<"\n";
    }
    return 0;
}