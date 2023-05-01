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

int freddy(){
    int n;
    cin>>n;
    map<string,int> mapa;
    map<string,int> :: iterator it;
    string a;
    int b;
    F0R(i,n){
        cin>>a>>b;
        mapa[a]=b;
    }

    string x;
    cin>>x;

    for(it=mapa.begin(); it!=mapa.end(); it++){
        if(it->f==x){
            cout<<it->second<<EL;
        }
    }
return 0;
}