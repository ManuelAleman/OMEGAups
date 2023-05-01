#include <bits/stdc++.h>
using namespace std;

int ordeInver(){
    int n;
    cin >> n;

    vector<int> num;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        num.push_back(x);
    }
    for(int i = 0; i < num.size()-1; i++){
        for(int j = i+1; j < num.size(); j++){
            if(num[i] > num[j]){
                int c = num[i];
                num[i] = num[j];
                num[j] = c;
            }
        }
    }

    for(int i = num.size()-1; i >= 0; i--){
        cout << num[i] << endl;
    }

    return 0;
}
