#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
ll factorial(ll n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main() {
    ll r, g, t;
    cin>>r>>g>>t;
    cout<<((r+1)*(g+1)*(t+1)) - 1<<endl;
    cout<<factorial(r+g+t-1)/factorial(2)<<endl;
    cout<<factorial(r+1)/factorial(r-g-t+1)<<endl;
    return 0;
}