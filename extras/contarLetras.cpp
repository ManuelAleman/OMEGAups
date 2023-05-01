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

int contarLetras(){

    string word;
    cin>>word;
    map<char,int> mapa; map<char, int> :: iterator it;
    mapa.insert(mp('a',0));
    mapa.insert(mp('b',0));
    mapa.insert(mp('c',0));
    mapa.insert(mp('d',0));
    mapa.insert(mp('e',0));
    mapa.insert(mp('f',0));
    mapa.insert(mp('g',0));
    mapa.insert(mp('h',0));
    mapa.insert(mp('i',0));
    mapa.insert(mp('j',0));
    mapa.insert(mp('k',0));
    mapa.insert(mp('l',0));
    mapa.insert(mp('m',0));
    mapa.insert(mp('n',0));
    mapa.insert(mp('o',0));
    mapa.insert(mp('p',0));
    mapa.insert(mp('q',0));
    mapa.insert(mp('r',0));
    mapa.insert(mp('s',0));
    mapa.insert(mp('t',0));
    mapa.insert(mp('u',0));
    mapa.insert(mp('v',0));
    mapa.insert(mp('w',0));
    mapa.insert(mp('x',0));
    mapa.insert(mp('y',0));
    mapa.insert(mp('z',0));

    F0R(i,word.size()){
        it=mapa.find(word[i]);
        it->s++;
    }
    vector<pair<char, int>>vector;
    for(auto a:mapa){
        vector.push_back(a);
    }

    F0R(i,vector.size()){
        cout<<vector[i].s<<" ";
    }
    cout<<EL;
    F0R(i,vector.size()){
        if(vector[i].s!=0){
            cout<<"La letra "<<vector[i].f<<" aparece "<<vector[i].s<<" veces"<<EL;
        }
    }



    return 0;
}