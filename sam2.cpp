#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n,k;
    cin>>n>>k;
    int i = 0, j = 0, l = 0;
		int ans = 0;
		for (i=1; i<=n; i++)
		{
			for (j=1; j<=n; j=i+1)
			{
				for (l=1; l<=n; l=j+1)
				{
					if ((i+j)%k==0 && (i+l)%k==0 && (j+l)%k==0) {
                        ans++;
                    }
				}
			}
		}
        cout<<ans;
    return 0;
}