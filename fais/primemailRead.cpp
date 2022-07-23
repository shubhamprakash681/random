#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i ==0) {
            return false;
        }
    }
    return true;
}

int numOfPrimes(int n) {
    int count = 0;
    for (int i=2; i<=n; i++) {
        if (isPrime(i) == 1) {
            count++;
            // cout<<"HI"<<i<<" ";
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    int res=0;
    int currrCount = numOfPrimes(n);

    while (n != 1) {
        currrCount = numOfPrimes(n);
        n -= currrCount;
        res++;
          
    }
    cout<<(res+1);

    return 0;
}