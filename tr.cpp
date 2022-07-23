#include <bits/stdc++.h>
using namespace std;

int myFun(int n, int m, vector<string> S) {
    int ans=0;
    for(int i=0;i<n;i++){
        int count=0;
        char a=' ', b=' ';
        for(int j=0;i<m;j++){
            if(count==0){
            a=S[i][j];
            count++;
            }else if(count==1){
            b=S[i][j];
            count++; 
            }else if(S[i][j]!=a && S[i][j]!=b){
                count++;
            }
        }
        if(count>2)
        ans+= (count-2);
    }
    int count=0;
    for(int j=0;j<m;j++){
        char prev=' ';
        for(int i=0;i<n;i++){
        if(S[i][j]==prev){
            count++;
        }
        prev=S[i][j];
        }
    }
    ans+=count;
    return ans;
}


int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<string> s(n);
    for (int j=0; j<n; j++) {
        cin>>s[j];
    }
    int result;
    result = myFun(n,m,s);
    cout<<result;
    return 0;
}