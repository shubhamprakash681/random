#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int tt=0;
    while (t--) {
        int ax, ay, bx, by, cx, cy, dx, dy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        dx = ax+cx-bx;
        dy=ay+cy-by;
        
        int num = ((by-ay)*dx - (bx-ay)*dy + (bx-ax)*ay - (by-ay)*ax);
        int den = (bx-ax)*(bx-ax) + (by-ay)*(by-ay);
        int h = (num)/(sqrt(den));

        int finH = abs(h);

        int b = ((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay));
        int finB = sqrt(b);

        int area = finB*finH;

        tt++;
        cout<<"Case "<<tt<<": "<<dx<<" "<<dy<<" "<<area<<endl;

    }
    return 0;
}