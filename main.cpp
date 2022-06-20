#include <bits/stdc++.h>
#include <pthread.h>
#include <utility>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

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
#define OK(n) cout << ((n) ? "OK" : "NG") << endl

#define vecin(v) rep(i, (v).size()) cin >> (v)[i]
#define vecprint(v) rep(i, (v).size()) cout << (v)[i] << " "

#define vec vector

#define LLMAX 9223372036854775803



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
    ll n, q; cin >> n >> q;
    vec<ll> a(n); vecin(a);
    vec<ll> x(q); vecin(x);

    srt(a);

    rep(i, q) {

        ll ok = n; ll ng = -1;
        ll mid = 0;
        while(abs(ok-ng) > 1) {
            mid = (ok + ng) / 2;
            if(x[i] <= a[mid]) {
                ok = mid;
            } else {
                ng = mid;
            }
        }

        cout << n - ok << endl;

    }
}