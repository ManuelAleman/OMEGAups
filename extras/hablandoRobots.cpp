#include "bits/stdc++.h"
using namespace std;

using ll = long long;
using ull = unsigned long long;

using pi = pair<int, int>;
using pl = pair<ll,ll>;
using pd = pair<double, double>;

using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<double>;
using vs = vector<string>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;

//PAIRS
#define mp make_pair
#define f first
#define s second

//VECTOR
#define sz(x) int((x).size() )
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

//loops
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for(int i=(a)-1; i>= (b); --i)
#define R0F(i,a) ROF(i,a,0);

#define EL '\n'



int hablando(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string, int>mapa;
    F0R(i,n){
        int x,y;
        cin>>x>>y;
        string str = to_string(0) + "-" + to_string(x);
        string str2 = to_string(1) + "-" + to_string(y);
        mapa[str] = y;
        mapa[str2] = x;
    }

    cin>>n;
    F0R(i,n){
        int x,y;
        cin>>x>>y;
        string str = to_string(x)+"-"+ to_string(y);
        auto it =mapa.find(str);
        if(it == mapa.end()){
            cout<<-1<<EL;
        }else{
            cout<<it->s<<EL;
        }
    }

    return 0;
}