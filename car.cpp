#include<bits/stdc++.h>
using namespace std;

int main() {
    float r1, n, r2, x;
    cin>>r1>>n>>r2>>x;
    float hr=ceil(x/60);
    if (hr<=n) {
        cout<<(hr*r1);
    }else {
        cout<<((r1*n) + (r2*(hr-n)))<<endl;
    }
    return 0;
}