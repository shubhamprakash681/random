// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int


// bool isTriPrime(ll n) {
//     ll cnt=0;
//     for (ll i=2; i<n; i++) {
//         if (n%i == 0) {
//             cnt++;
//         }
//         if(cnt>1) {
//             return false;
//         }
//     }
//     if (cnt==1) {
//         return true;
//     }
// }
// int main() {
//     ll t;
//     cin>>t;
//     while (t--) {
//         ll n;
//         cin>>n;
//         ll ans=0;
//         for (ll i=2; i<=n; i++) {
//             if (isTriPrime(i)) {
//                 ans++;
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }






// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}
int main()
{
	int n = 30;
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}
