#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;
    cin>>n;
    string str;
    ll num;
    ll c=1;
    map<string, vector<pair<ll, ll>>> mp;
    for (ll i=1; i<=n; i++) {
        cin>>str;
        cin>>num;
        mp[str].push_back(make_pair(num, c));
        c++;
    }
    
    for(map<string, vector<ll>>::iterator it=mp.begin(); it!=mp.end(); it++) {
        for (ll i=0; i<it->second.size(); i++) {
            sort(it->second.begin(), it->second.end());
            // cout<<it->first<<" "<<it->second[i]<<endl;
        }
        for (ll i=0; i<it->second.size(); i++) {
            // sort(it->second.begin(), it->second.end());
            cout<<it->first<<" "<<it->second[i]<<endl;

        }
    }
    return 0;
}