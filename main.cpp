#include <bits/stdc++.h>
#include <pthread.h>
#include <utility>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define LLMAX 9223372036854775803
#define PI M_PI

// Repeat
#define rep(i, n) for (ll i = 0; i < ll(n); i++)
#define reps(i, fm, to) for(ll i = ll(fm); i < ll(to); i++)
#define fore(row, arr) for(auto& row: arr)
#define LN length()

// Print
#define print(msg) cout << (msg) << endl
#define iif(flag, ifTrue, ifFalse) cout << ((flag) ? string(ifTrue) : string(ifFalse)) << endl
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define yes(n) cout << ((n) ? "yes" : "no") << endl

// Vector
#define vec vector
#define vin(v) rep(vin_cnt, (v).size()) cin >> (v)[vin_cnt]
#define vout(v) rep(vout_cnt, (v).size()) cout << (v)[vout_cnt] << " "; cout << endl
#define all(obj) (obj).begin(),(obj).end()
#define PB push_back
#define SZ size()
#define subvec(v, l, r) {(v).begin()+(l), (v).begin()+(r)}

// Pair, Tuple
#define MP make_pair
#define MT make_tuple
#define F first
#define S second

// Sort
#define SORT(v) sort((v).begin(), (v).end())
#define SORT_G(v) sort((v).begin(), (v).end(), greater<ll>())

// BinarySearch
#define BinarySearch(arr, value, ans) ll binary_search_ok = arr.size(); ll binary_search_ng = -1; while(abs(binary_search_ok - binary_search_ng) > 1) {ans = (binary_search_ok + binary_search_ng) / 2; if(value <= arr[ans]) binary_search_ok = ans else binary_search_ng = ans;}

// Debug
#define chk cout << "check" << endl;
#define check(msg) cout << "check: " << msg << endl

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
        d[x]+=d[y];d[y]=x;
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
 
}