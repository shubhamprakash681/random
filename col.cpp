#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char c[n];
    for (int i=0; i<n; i++) {
        cin>>c[i];
    }
    map<char, int> mp;
    for (int i=0; i<n; i++) {
        mp[c[i]]++;
    }
    for (map<char, int>::iterator it = mp.begin(); it!=mp.end(); it++) {
        // cout<<it->first<<" "<<it->second<<endl;
        if ((it->second)%2!=0) {
            cout<<it->first;
            break;
        }
    }
    return 0;
}