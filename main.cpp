#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

ll gcd(ll a, ll b) {
    if(a % b == 0) {
        return b;
    } else {
        return gcd(b, a%b);
    }
}

ll lcm(ll a, ll b) {
    return a*b / gcd(a, b);
}

int main(){   
    ll n, a, b; cin >> n >> a >> b;
    ll sum = n * (1 + n) / 2;

    
    ll nn = n / a;
    ll max = (n / a) * a;
    ll asum = nn * (a + max) / 2;

    nn = n / b;
    max = (n / b) * b;
    ll bsum = nn * (b + max) / 2; 

    ll ab = lcm(a, b);
    nn = n / ab;
    max = (n / ab) * ab;
    ll absum = nn * (ab + max) / 2;

    sum = sum - asum - bsum + absum;

    cout << sum << endl;
}
