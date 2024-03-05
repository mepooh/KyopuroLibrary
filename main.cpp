#include <bits/stdc++.h>

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

const ll DX[4] = {1, 0, -1, 0};
const ll DY[4] = {0, 1, 0, -1};
const string DIRECT = "rdlu";

// Pair, Tuple
#define MP make_pair
#define MT make_tuple
#define F first
#define S second

// Sort
#define SORT(v) sort((v).begin(), (v).end())
#define SORT_G(v) sort((v).begin(), (v).end(), greater<ll>())

string toBinary(ll n) {
    string ans = "";
    while(n != 0) {
        if(n % 2 == 0) ans += "0";
        else ans += "1";
        n /= 2;
    }
    return ans;
}

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

vec<vec<ll> > BitAll(ll n) {
    vec<vec<ll> > result;
    for(ll bit = 0; bit < (1<<n); ++bit) {
        vec<ll> s;
        for(ll i = 0; i < n; ++i) if(bit & (1<<i)) s.push_back(i);
        result.push_back(s);
    }
    return result;
}

pair<ll, ll> move(pair<ll, ll> loc, char dir) {
    if(dir == 'L') return MP(loc.F, loc.S-1);
    if(dir == 'R') return MP(loc.F, loc.S+1);
    if(dir == 'U') return MP(loc.F-1, loc.S);
    if(dir == 'D') return MP(loc.F+1, loc.S);
    return MP(-1, -1);
}

bool is_kaibun(ll x) {
    string s = to_string(x);
    rep(i, s.length()/2) if(s[i] != s[s.length() - i - 1]) return false;
    return true;
}

int main() {
    ll n, t; cin >> n >> t;
    vec<ll> score(n);
    rep(i, t) {
        ll a, b; cin >> a >> b;
        score[a-1] += b;
        map<ll, ll> cnt;
        rep(j, n) cnt[score[j]]++;
        cout << cnt.size() << endl;
    }
} 