#include <bits/stdc++.h>
#include <pthread.h>
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
#define vecprint(v) rep(i, (v).size()) cout << (v)[i] << " "

#define vec vector

#define LLMAX 9223372036854775803

#define chk cout << "check" << endl
#define dgp(msg) cout << "check: " << msg << endl

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

vec<pair<ll, ll>> prime_factorize(ll n) {
    vec<pair<ll, ll>> ans;
    for(ll p = 2; p * p <= n; p++) {
        if(n % p != 0) continue;
        ll e = 0;
        while(n % p == 0) {
            e++;
            n /= p;
        }
        ans.emplace_back(p, e);
    }
    if(n != 1) ans.emplace_back(n, 1);
    return ans;
}

ll kaijou(ll a) {
    ll ans = 1;
    rep(i, a) ans *= a - i;
    return ans;
}

ll fn0(ll a, ll b) {
    ll ans = 0;
    while(a % b == 0) {
        a /= b; ans++;
    }
    return ans;
}

ll fn1(ll a, ll b) {
    // a を b で何回割れるかを返す関数
    if(a % b != 0) return -1;
    if(a == 0) return 0;
    return fn0(a,b) + fn1(a-b, b);
}


int main(){
    ll n, p; cin >> n >> p;

    ll ans = (100 * n) / (100 + p);

    cout <<  ans % 998244353 << endl;
}   
