#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0;
        int arr[n] = {10, 7, 5, 1};
        for (int i=0; i<4; i++) {
            int tm = n%arr[i];
            a+=(tm);
            if (tm == 0) {
                break;
            }else {
                n/= arr[i];
            }
        }
        cout<<a<<endl;
        
    }
    return 0;

}