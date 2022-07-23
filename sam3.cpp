#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll smallDiv(ll n) {
    for (ll i=2; i<=n; i++) {
        if (n%i==0) {
            return i;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;
    cin>>n>>q;
    vector<ll> v;
    ll temp;
    for (ll i=0; i<n; i++) {
        cin>>temp;
        v.push_back(temp);

    }
    for (ll i=1; i<=q; i++) {
        ll l,r;
        cin>>l>>r;
        ll ans=0;
        
        for (ll d=l; d<=r; d++) {
            ll in = d-1;
            ans+=smallDiv(v[in]);
        }
        cout<<ans<<endl;
    }


    return 0;
}