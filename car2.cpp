#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   ll r1, n, r2, x;
   cin>>r1>>n>>r2>>x;

   ll hour = ceil(x/60.0);
   
   if(hour<=n){
     cout<<hour*r1;
   }else{
    cout<< ((hour-n)*r2) + (r1*n);
    }
    
}