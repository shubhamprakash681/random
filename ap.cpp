#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
    ll n;
    cin>>n;
    for (ll i=0; i<n; i++) {
        cout<<'*';
    }
    cout<<endl;

    ll n1=n/2;
    for (ll i=1; i<=n1; i++) {
        for (ll j=1; j<=n1-i+1; j++) {
            cout<<'*';
        }
        for (ll j=1; j<=2*i-1;j++) {
            cout<<' ';
        }
        for (ll j=1; j<=n1-i+1; j++) {
            cout<<'*';
        }
        cout<<endl;
    }

    for (ll i=n1-1; i>=1; i--) {
        for (ll j=1; j<=n1-i+1; j++) {
            cout<<'*';
        }

        for (ll j=1; j<=2*i-1; j++) {
            cout<<' ';
        }
        for (ll j=1; j<=n1-i+1; j++) {
            cout<<'*';
        }
        cout<<endl;
    }

    for (ll i=0; i<n; i++) {
        cout<<'*';
    }
    cout<<endl;
    return 0;
}