#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int contarC(int n, int s, int d, string current, unordered_map<string, int>& memo) {
    if (d == n) {
        return s == 21 ? 1 : 0;
    }
    string key = to_string(s) + "|" + to_string(d);
    if (memo.count(key)) {
        return memo[key];
    }
    int count = 0;
    for (int i = 0; i < 10; i++) {
        count += contarC(n, s + i, d + 1, current + to_string(i), memo);
    }
    memo[key] = count;
    return count;
}
int combinaciones() {
    int n;
    cin >> n;
    unordered_map<string, int> memo;
    cout << contarC(n, 0, 0, "", memo);
    return 0;
}
