#include<bits/stdc++.h>
using namespace std;

int calculateMaxBeauty(int arr[], int n) {
	bool rep = false;
	for (int i=0; i<n-1; i++) {
		if (arr[i] == arr[i+1]) {
			rep = true;
		}
	}
	if (n==1) {
		return 0;
	}else if (n%2==0 && rep == false) { //even
	int ans = 0;
		for (int i=0; i<n-1; i=i+2) {
			ans+= (arr[i]^arr[i+1]);
		}
		return ans;
	}else {
		int sum = 0;
		int st=0, en=0;
		int cMax = (arr[st]^arr[en]);
		while (en<n) {
			if ((arr[st]^arr[en]) >= cMax) {
				en++;
			}
			
		}
	}
	return 0;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}

	cout<<calculateMaxBeauty(arr, n)<<endl;
	return 0;
}