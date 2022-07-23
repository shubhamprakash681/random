#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    ll t;
    for (ll i=0; i<n; i++) {
        cin>>t;
        v.push_back(t);
    }

    ll ans=0;
    ll itn=0;
    for (ll i=n-1; i>=0; i--) {
        itn++;
        if (itn<=k) {
            ll j;
            for (j=i+1; j<n; j++) {
                if (v[j]>=v[i]) {
                    break;
                }
            }
            if (j==n) {
                // cout<<i<<" ";
                ans++;
            }
        }else{
            ll j;
            ll tc=0;
            for (j=i+i; j<n; j++) {
                if (v[j]<v[i]) {
                    tc++;
                }if (tc==k) {
                    ans++;
                    // cout<<i<<" ";
                    break;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}