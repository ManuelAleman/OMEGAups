#include "bits/stdc++.h"
using namespace std;

int abc(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int a, b, c;
    char ord1, ord2, ord3;
    cin >> a >> b >> c >> ord1 >> ord2 >> ord3;
    vector<int> nums = {a, b, c};

    sort(nums.begin(), nums.end());
    if(ord1 == 'A' && ord2 == 'C' && ord3 == 'B') {
        swap(nums[1], nums[2]);
    } else if(ord1 == 'B' && ord2 == 'A' && ord3 == 'C') {
        swap(nums[0], nums[1]);
    } else if(ord1 == 'B' && ord2 == 'C' && ord3 == 'A') {
        swap(nums[0], nums[1]);
        swap(nums[1], nums[2]);
    } else if(ord1 == 'C' && ord2 == 'A' && ord3 == 'B') {
        swap(nums[0], nums[2]);
        swap(nums[1], nums[2]);
    } else if(ord1 == 'C' && ord2 == 'B' && ord3 == 'A') {
        swap(nums[0], nums[2]);
    }

    cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;

}