#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

// a と b の最大公約数を求める
ll gcd(ll a, ll b) {
    if(a % b == 0) {
        return b;
    } else {
        return gcd(b, a%b);
    }
}

// a と b の最小公倍数を求める
// 上の gcd とセットで使う
ll lcm(ll a, ll b) {
    return a*b / gcd(a, b);
}