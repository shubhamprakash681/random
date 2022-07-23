#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=0;
unordered_map<int,int>um;
for(int i=0;i<=n-3;i++){
    um[arr[i]]++;
    if(arr[i]!=arr[i+2]){
        ans++;
    }
}
um[arr[n-2]]++;
um[arr[n-1]]++;

if(um.size()>=2){
    cout<<ans;
}else{
    cout<<n/2;
}
return 0;
}