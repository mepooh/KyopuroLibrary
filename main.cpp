#include <bits/stdc++.h>
#include <utility>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repp(i,a,n) for(ll i = (a); i < (n); i++)

#define srt(v) sort((v).begin(), (v).end())
#define srtg(v) sort((v).begin(), (v).end(), greater<ll>())

#define outln(s) cout << s << endl
#define outss(s) cout << s << " "
#define outendl  cout << endl

#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl
#define yes(n) cout << ((n) ? "yes" : "no") << endl

#define vecin(v) rep(i, (v).size()) cin >> (v)[i]
#define vecprint(v) rep(i, (v).size()) cout << (v)[i]

#define vec vector
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

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

// a と b の最大公約数を求める
ll gcd(ll a, ll b) {
    if(a % b == 0) {
        return b;
    } else {
        return gcd(b, a%b);
    }
}

// a と b の最小公倍数を求める
ll lcm(ll a, ll b) {
    return a*b / gcd(a, b);
}

int main(){

}
