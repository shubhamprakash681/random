#include<bits/stdc++.h>
using namespace std; 

int dp[11][11][11][3];
 

int no_of_ways(int R, int G, int T, int last)
{
    
    if (R<0 || G<0 || T<0)
        return 0;
 
    if (R==1 && G==0 && T==0 && last==0)
        return 1;
 
    
    if (R==0 && G==1 && T==0 && last==1)
        return 1;
    if (R==0 && G==0 && T==1 && last==2)
        return 1;
 
    
    if (dp[R][G][T][last] != -1)
        return dp[R][G][T][last];
 
    
    if (last==0)
       dp[R][G][T][last] = no_of_ways(R-1,G,T,1) + no_of_ways(R-1,G,T,2);
 
    
    else if (last==1)
       dp[R][G][T][last] = no_of_ways(R,G-1,T,0) + no_of_ways(R,G-1,T,2);
    else 
       dp[R][G][T][last] =  no_of_ways(R,G,T-1,0) + no_of_ways(R,G,T-1,1);
 
    return dp[R][G][T][last];
}
 

int count(int R, int G, int T)
{
   
   memset(dp, -1, sizeof(dp));
 
   
   return no_of_ways(R, G, T, 0) +  no_of_ways(R, G, T, 1) +  no_of_ways(R, G, T, 2); 
}
 

int main()
{  
    int R,G,T;
    cin>>R>>G>>T;
    cout<<count(R, G, T);
    return 0;
}