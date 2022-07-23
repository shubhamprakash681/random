#include<bits/stdc++.h>
using namespace std;
#define ll long long int

inline ll gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }

int main() {
    const ll maxn = 22;
    const ll max = 500;
    const ll mod = 1e9;

    ll n;
    cin>>n;
    vector<ll> p2;
    ll to[maxn][maxn];
    p2.push_back(1);
    ll ans=0;
    for (ll i=0; i<max; i++) {
        ll t=p2[i-1]*2%mod;
        p2.push_back(t);
    }

    for (ll a=1; a<=n; ++a) {
        for (ll b = a + 1; b <= n; ++b) {
            for (ll i = a; i <= b; ++i) {
                for (ll j = i + 1; j <= b; ++j) {
                    if (gcd(i, j) == 1) {
                        ++to[a][b];
                    }
	    
                }
            }
        }
    }

    for(ll m=0; m<(1 << (n - 1)); ++m) {
        ll pr=1, cr=1;
        for (ll x=1; x<n; ++x) {
            if (m &  (1 << (x - 1))) {
                cr=(ll)(cr*p2[to[pr][x]] % mod);
                pr=x+1;
            }
        }
        cr = (ll)cr * p2[to[pr][n]] % mod;
        ans += __builtin_popcount(m) % 2 == 0 ? cr : -cr;
        ans %= mod;
    }

    ans+=mod;
    ans%=mod;
    cout<<ans;
    return 0;
}