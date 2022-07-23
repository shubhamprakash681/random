#include<bits/stdc++.h>
using namespace std;
#define eb emplace_back
int main()
{
    int n; cin >> n; 
    vector<vector<int>>arr(10001);
    for(int i=0;i<n; i++){
        int a,b; cin >> a >> b; 
        arr[b].eb(a);
    }
    int t = 0; 
    int ans = 0; 
    if (arr.size()!=0) {
        for(int i=0; i<10001; i++){
            sort(arr[i].begin(),arr[i].end(),greater<int>());
            for(auto x : arr[i]){
                if(i > t){
                    ans += x; 
                    t++;
                }else{
                    break;
                }
            }
        }
    }
    
    cout << ans << endl;  
    return 0;
}