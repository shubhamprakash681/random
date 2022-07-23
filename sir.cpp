#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n;
    cin>>n;
    ll li, ti;
    vector<pair<int, int>> v;
    for (ll i=0; i<n; i++) {
        cin>>li>>ti;
        v.push_back(make_pair(ti, li));
    }
    sort(v.begin(), v.end());

    ll ans=0;
    ll pi=1;
    for (ll i=0; i<n; i++) {
        if (i!=n-1 && (v[i].first == v[i+1].first)) {
            continue;
        }else {
            ans+=v[i].second;
        }
    }

    cout<<ans<<endl;
    return 0;
}