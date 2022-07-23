#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<vector<int>> llv;
    for (int i=1; i<=n+2; i++) {
        string str;
        getline(cin, str);
        vector<int> tvec;
        for (int i=0; i<str.size(); i++) {
            if (str[i] != ' ') {
                tvec.push_back(str[i] - '0');
            }
        }
        llv.push_back(tvec);
    }

    for (vector<int> line:llv) {
        for (int el:line) {
            cout<<el<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    pair<int, int> startend;
    startend = (make_pair(llv[llv.size()-1][0], llv[llv.size()-1][1]));

    cout<<startend.first<<" "<<startend.second<<endl;

    // logic
    

    return 0;
}