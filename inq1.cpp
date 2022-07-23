#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int AGPQueries(int *arr, int *type, int *v1, int *v2, int q, int n) {
    int sum=0;

    for (int i=0; i<q; i++) {
        if (type[i] == 1) {
            arr[v1[i]-1] = v2[i];
            
        }else if (type[i]==2) {
            int op1 = 2;
            int op2 = 1;
            int l=v1[i];
            int r=v2[i];
            for (int j=l-1; j<r; j++) {
                sum+= ((op1+op2)*arr[j]);
                sum = sum%mod;
                op1*=2;
                op2++;
            }
            
        }
    }return sum;
}


int main() {
    int n, q;
    cin>>n>>q;

    int arr[n];
    int type[q];
    int v1[q];
    int v2[q];

    int tmp;
    for (int i=0; i<n; i++) {
        cin>>tmp;
        arr[i] = tmp;
    } 
    for (int i=0; i<q; i++) {
        cin>>tmp;
        type[i] = tmp;
    } 
    for (int i=0; i<q; i++) {
        cin>>tmp;
        v1[i] = tmp;
    } 
    for (int i=0; i<q; i++) {
        cin>>tmp;
        v2[i] = tmp;
    } 
    cout<<AGPQueries(arr, type, v1, v2, q, n)<<endl;
    return 0;
}