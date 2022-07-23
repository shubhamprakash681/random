#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int sum = 0;
    while (n>0) {
        int rem = n%10;
        if(isPrime(rem) == false) {
            sum+=rem;
        }
        n/=10;
    }
    cout<<sum;
    return 0;
}