#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repp(i,a,n) for(ll i = (a); i < (n); i++)

#define srt(v) sort((v).begin(), (v).end())

#define outln(s) cout << s << endl
#define outss(s) cout << s << " "
#define outendl  cout << endl;

#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl;
#define yes(n) cout << ((n) ? "yes" : "no") << endl;

#define vecin(v) rep(i, (v).size()) cin >> (v)[i]

#define vec vector
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main(){
    ll n, k; cin >> n >> k;
    vec<ll> a(n); vecin(a);

    map<ll, vec<ll>> mp;
    rep(i, n) {
        ll temp = i % k;
        mp[temp].push_back(a[i]);
    }

    rep(i, k) srt(mp[i]);

    vec<ll> sorted(n);
    rep(i, k) {
        rep(j, mp[i].size()) sorted[k*j + i] = mp[i][j];
    }

    bool ans = true;
    rep(i, n) {
        if(i == 0) continue;
        if(sorted[i-1] > sorted[i]) ans = false;
    }

    Yes(ans);
}
