#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for (int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    } 
    cout<<endl;
    vector<int> cnt(n, 0);
    for (int i=0; i<n; i++) {
        cout<<cnt[i]<<" ";
    } 
    cout<<endl;
    for (int i=0; i<n; i++) {
        float t=v[i];
        int b=0;
        while (t>=0 && (t-(int)t==0)) {
            b++;
            cout<<t<<" ";
            if (b==1) {
                cnt[i] = 1;
            }else if (b==2) {
                cnt[i] = 2;
            }else {
                cnt[i] = cnt[i]+2;
            }
            t=sqrt(t);
        }
            cout<<endl;
    }
    for (int i=0; i<n; i++) {
        cout<<cnt[i]<<" ";
    } 
    return 0;
}