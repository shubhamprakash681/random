#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int ones[3], tens[3], h[3], th[3];
    ones[0] = a%10;
    ones[1] = b%10;
    ones[2] = c%10;

    a/=10;
    b/=10;
    c/=10;
    tens[0] = a%10;
    tens[1] = b%10;
    tens[2] = c%10;

    a/=10;
    b/=10;
    c/=10;
    h[0] = a%10;
    h[1] = b%10;
    h[2] = c%10;

    a/=10;
    b/=10;
    c/=10;
    th[0] = a%10;
    th[1] = b%10;
    th[2] = c%10;

    int key = (1000*(min(th[0], min(th[1], th[2])))) + (100*(max(h[0], max(h[1], h[2])))) + (10*(min(tens[0], min(tens[1], tens[2])))) + (max(ones[0], max(ones[1], ones[2])));
    cout<<key;
    return 0;
}