#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll l,r,x,y;
    cin>>l>>r>>x>>y;
    ll cn=0;
    ll d1=((r-l)/x)+1;
    ll d2=((r-l)/y)+1;
    int ans = d1+d2;
    vector<ll> cf;
    for (ll i=l; i<=r; i++) {
        if ((i%x == 0)  &&  (i%y == 0)) {
            // cf.push_back(i);
            ans-=((r-l)/i);
        }
    }
    cout<<cn;
    return 0;
}