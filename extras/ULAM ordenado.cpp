#include "bits/stdc++.h"
using namespace std;

int ulam(){
    int n;
    cin>>n;
    vector<int> nums;

    nums.push_back(n);

    while (n!=1){
        if(n%2==0){
            n=n/2;
        }else{
            n=(n*3)+1;
        }
        nums.push_back(n);
    }

    sort(nums.begin(),nums.end());
    for(auto a: nums){
        cout<<a<<' ';
    }
}