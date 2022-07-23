#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestUniqueSubsttr(string S) {
        int l=S.length();
        int ans=0;
        int i=0, j=0;
        for (int i=0; i<l; i++){
            for (int j=i; j<l; j++) {
                
            }
        }
        return ans;
    }
};

int main() {
    string s;
    cin>>s;
    Solution ob;
    cout<<ob.longestUniqueSubsttr(s);
    return 0;
}