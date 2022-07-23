#include<bits/stdc++.h>
using namespace std;

int minimumFlips(string target) {

    vector<int> vt;
    for (int i=0; i<target.size(); i++) {
        vt.push_back(target[i] - '0');
    }


    int t=1;
    int ans=0;
    for (int i=0; i<vt.size(); i++) {
        if (vt[i] == t) {
            ans++;
            if (t==0) {
                t=1;
            }else {
                t=0;
            }
        }
    }
    return ans;
}

int main() {
    string target;
    cin>>target;
    cout<<minimumFlips(target)<<endl;
    return 0;
}