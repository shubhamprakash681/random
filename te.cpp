#include<bits/stdc++.h>
using namespace std;


class Solutiion{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int ans=0;
        vector<int> dp(26,0);
        vector<int> allLengths;
        for (int i=0; i<S.length(); i++) {
            int ch=S[i];
            ch-='a';
            // cout<<ch<<" ";
            if(dp[ch]==0) {
                ans++;
                dp[ch]=1;
            }else{
                allLengths.push_back(ans);
                ans=1;
                fill(dp.begin(), dp.end(), 0);
                dp[ch]=1;
            }
        }
        int maxTill=0;
        for (int i=0; i<allLengths.size(); i++) {
            cout<<allLengths[i]<<" ";
            if(allLengths[i]>maxTill) {
                maxTill=allLengths[i];
            }
        }
        cout<<endl;
        
        return maxTill;
    }
};


int main(){
    string s;
    cin>>s;
    Solutiion ob;
    
    cout<<ob.longestUniqueSubsttr(s);
    return 0;
}