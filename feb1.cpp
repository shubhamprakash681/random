#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int oS=0;
    int eS=0;
    int bkp=n;

    while (bkp > 0) {
         oS+=(bkp%10);
        bkp/=100;
    }
    n/=10;
    while (n > 0) {
         eS+=(n%10);
        n/=100;
    }

    if (oS == eS) {
        cout<<"Sum are equal";
    
    }else {
        cout<<"Sum are not equal";

    }
    return 0;
}