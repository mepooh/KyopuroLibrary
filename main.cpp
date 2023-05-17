#include <bits/stdc++.h>
#include <pthread.h>
#include <utility>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define LLMAX 9223372036854775803

// Repeat
#define rep(i, n) for (ll i = 0; i < ll(n); i++)
#define repi(i, fm, to) for(ll i = ll(fm); i < ll(to); i++)
#define LN length()

// Print
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define yes(n) cout << ((n) ? "yes" : "no") << endl
#define AC(n) cout << ((n) ? "AC" : "WA") << endl
#define print(msg) cout << (msg) << endl
#define sankou(flag, t, f) cout << ((flag) ? string(t) : string(f)) << endl

// Vector
#define vec vector
#define vin(v) rep(vin_cnt, (v).size()) cin >> (v)[vin_cnt]
#define vout(v) rep(vout_cnt, (v).size()) cout << (v)[vout_cnt] << " "; cout << endl
#define vecin(v, i) rep(i, (v).size()) cin >> (v)[i]
#define vecout(v, i) rep(i, (v).size()) cout << (v)[i] << " "; cout << endl
#define vall(v) (x).begin(),(x).end()
#define PB push_back
#define SZ size()
#define subvec(v, l, r) {(v).begin()+(l), (v).begin()+(r)}

// Sort
#define srt(v) sort((v).begin(), (v).end())
#define srtg(v) sort((v).begin(), (v).end(), greater<ll>())

// Pair 
#define mp make_pair

// Debug
#define ck cout << "check" << endl
#define ck(msg) cout << "check: " << (msg) << endl

struct UnionFind{
    vector<ll> d;
    UnionFind(ll n) :d(n,-1){}
    ll root(ll x){
        if(d[x]<0) return x;
        return d[x]=root(d[x]);
    }
    bool unite(ll x,ll y){
        x=root(x);y=root(y);
        if(x==y) return false;
        if(d[x] > d[y]) swap(x,y);
        d[x]+=d[y];
        d[y]=x;
        return true;
    }
    bool same(int x,int y) { return root(x)==root(y); }
    ll size(int x) {return -d[root(x)]; }
};

vec<vec<ll>> BitAll(ll n) {
    vec<vec<ll>> result;
    for(ll bit = 0; bit < (1<<n); ++bit) {
        vec<ll> s;
        for(ll i = 0; i < n; ++i) if(bit & (1<<i)) s.push_back(i);
        result.push_back(s);
    }
    return result;
}

int main() {
    string S; cin >> S;
    bool east = false, west = false, south = false, north = false;
    rep(i, S.length()) {
        if(S[i] == 'E') east = true;
        if(S[i] == 'W') west = true;
        if(S[i] == 'S') south = true;
        if(S[i] == 'N') north = true;
    } 

    Yes(!(east ^ west) && !(south ^ north));
}  
