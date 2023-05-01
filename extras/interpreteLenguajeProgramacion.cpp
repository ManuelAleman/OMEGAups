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

int progra(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    map<string, int> variables; map<string, int>::iterator itVar;
    map<string, int> referencia; map<string, int>::iterator itRef;
    string accion, var, ref;
    int contError =1;
    cin>>accion;
    while(cin>>accion){
        if(accion[0]=='V'){
            cin>>var;
            if(variables.find(var)==variables.end()){
                cout<<"ERROR L"<<contError<<EL;
            }else{
                variables[var]=0;
            }
            contError++;
        }else if(accion[0]=='R') {
            cin>>ref>>var;
            if(variables.find(ref)==variables.end() or variables.find(var)==variables.end()){
                cout<<"ERROR L"<<contError<<EL;
            }else{
                referencia[ref]=variables[var];
            }
            contError++;
        }else if(accion[0]=='I'){
            cin>>var;
            if(variables.find(var)==variables.end()){
                cout<<"ERROR L"<<contError<<EL;
            }else{
                variables[var]++;
            }
            contError++;
        }else{
            for(itRef=referencia.begin(); itRef!=referencia.end();itRef++){
                int contador = itRef->second;
                cout<<contador<<EL;
            }

        }

    }
    return 0;
}