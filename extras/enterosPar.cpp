#include "bits/stdc++.h"
using namespace std;

int enteroPar(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, p;
    cin>>n;
    vector<int>nums;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cin>>p;
    for(int ele: nums){
        if(p==0){
            if(ele%2==0){
                cout<<ele<<" ";
            }
        }else{
            if(ele%2!=0){
                cout<<ele<<" ";
            }
        }
    }
}