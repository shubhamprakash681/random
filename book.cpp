#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n;
    cin>>n;
    vector<ll> v;
    ll temp;
    for (ll i=0; i<n; i++) {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    vector<ll> b;
    for (ll i=0; i<n; i++) {
        b.push_back(v[n-i-1]);
    }
    for (ll i=2; i<n; i+=3) {
        b[i]=0;
    }

    ll ans=0;
    for (ll i=0; i<n; i++) {
        ans+=b[i];
    }
    cout<<ans;
    return 0;
}
