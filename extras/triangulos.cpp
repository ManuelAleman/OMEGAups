#include "bits/stdc++.h"
using namespace std;
int triangulo(){
    int n;
    cin>>n;
    vector<int>nums;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    int a,b,c;
    a=nums[n-3], b =nums[n-2], c=nums[n-3]  ;
    if(a<=b<=c && a+b>c){
        cout<<a+b+c;
    }else{
        cout<<-1;
    }
    return 0;
}