#include "bits/stdc++.h"
using namespace std;

int postresdf(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int k, n, t;
    cin >> k >>n;

    vector<int>postres;
    for (int i = 0; i < n; ++i) {
        cin>>t;
        postres.push_back(t);
    }

    sort(postres.begin(), postres.end());

    int min = INT_MAX;
    for(int i=0;i<=n-k;i++){
        int diferencia = postres[i+k-1]-postres[i];
        if(diferencia<min){
            min=diferencia;
        }
    }

    cout<<min;

    return 0;
}