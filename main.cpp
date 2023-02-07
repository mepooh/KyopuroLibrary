#include <bits/stdc++.h>
#include <pthread.h>
#include <utility>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define LLMAX 9223372036854775803

// Repeat
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repi(i, a, b) for(ll i = (a); i < (b); i++)

// Print yes/no
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define yes(n) cout << ((n) ? "yes" : "no") << endl
#define print(msg) cout << (msg) << endl

// Vector
#define vec vector
#define vecin(v) rep(i, (v).size()) cin >> (v)[i]
#define vecout(v) rep(i, (v).size()) cout << (v)[i] << " "
#define vecall(v) (x).begin(),(x).end()
#define pb push_back

// Sort
#define srt(v) sort((v).begin(), (v).end())
#define srtg(v) sort((v).begin(), (v).end(), greater<ll>())

// Pair 
#define mp make_pair

// Debug
#define ck cout << "check" << endl
#define dp(msg) cout << "check: " << (msg) << endl

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

int main(){
    cout << "Hello world" << endl;
}   
