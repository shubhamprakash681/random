#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int cSum = arr[0];
    for (int i=0; i<n; i++) {
        if(i==0) {
            cout<<cSum<<" ";
        }else{
            cSum += arr[i];
            cout<<cSum<<" ";
        }
    }
    return 0;
}