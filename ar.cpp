#include <bits/stdc++.h>
using namespace std;

int minSwapsToSort(vector<int> arr, int n)
{
	// Create an array of pairs where first
	// element is array element and second element
	// is position of first element
	pair<int, int> arrPos[n];
	for (int i = 0; i < n; i++)
	{
		arrPos[i].first = arr[i];
		arrPos[i].second = i;
	}

	// Sort the array by array element values to
	// get right position of every element as second
	// element of pair.
	sort(arrPos, arrPos + n);

	// To keep track of visited elements. Initialize
	// all elements as not visited or false.
	vector<bool> vis(n, false);

	// Initialize result
	int ans = 0;

	// Traverse array elements
	for (int i = 0; i < n; i++)
	{
		// already swapped and corrected or
		// already present at correct pos
		if (vis[i] || arrPos[i].second == i)
			continue;

		// find out the number of node in
		// this cycle and add in ans
		int cycle_size = 0;
		int j = i;
		while (!vis[j])
		{
			vis[j] = 1;

			// move to next node
			j = arrPos[j].second;
			cycle_size++;
		}

		// Update answer by adding current cycle.
		ans += (cycle_size - 1);
	}

	// Return result
	return ans;
}

// method returns minimum number of swap to make
// array B same as array A
int minSwapToMakeArraySame(vector<int> a, vector<int> b, int n)
{
	// map to store position of elements in array B
	// we basically store element to index mapping.
	map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[b[i]] = i;

	// now we're storing position of array A elements
	// in array B.
	for (int i = 0; i < n; i++)
		b[i] = mp[a[i]];

	/* We can uncomment this section to print modified
	b array
	for (int i = 0; i < N; i++)
		cout << b[i] << " ";
	cout << endl; */

	// returing minimum swap for sorting in modified
	// array B as final answer
	return minSwapsToSort(b, n);
}

bool chk(vector<int> v1, vector<int> v2, int n) {
    for (int i=0; i<n; i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int costOfUniformity(int n, vector<int> x, vector<int> t) {
    
    int ac=0;
    vector<int> av;
    av= x;
    bool at = false;
    while(!at) {
        for (int i=1; i<n; i++) {
            if(av[0] == t[i]) {
                // cout<<"i= "<<i<<endl;
                int temp = av[i];
                av[i] = av[0];
                for (int j=0; j<i; j++) {
                    av[j] = av[j+1];
                }
                av[i-1] = temp;
                ac++;
                break;
            }
        }
        at = chk(av, t, n);
    }
    int bc=0;
    vector<int> bv;
    bv = x;
    bool bt = false;
    while(!bt) {
        for (int i=n-1; i>=0; i--) {
            if(bv[n-1] == t[i]) {
                // cout<<"i= "<<i<<endl;
                int temp = bv[i];
                bv[i] = bv[n-1];
                for (int j=n-1; j>i; j--) {
                    bv[j] = bv[j-1];
                }
                bv[i+1] = temp;
                bc++;
                break;
            }
        }
        bt = chk(bv, t, n);
    }
    
    int cc=0;
    vector<int> cv;
    cv = x;
    bool ct = false;
    // while(!ct) {
        
    //     for (int i=n-1; i>=0; i--) {
    //         if(bv[n] == t[i]) {
    //             int temp = bv[n];
    //             bv[n] = t[i];
    //             bv[i] = temp;
    //             bc++;
    //             break;
    //         }
    //     }
    //     ct = chk(cv, t, n);
    // }

    cc = minSwapToMakeArraySame(cv, t, n);
    // cout<<ac<<bc<<cc<<endl;
    return ac+bc+cc+2;
}

int main() {
    int n;
    cin>>n;
    vector<int> x(n);
    for (int i=0; i<n; i++) {
        cin>>x[i];
    }
    vector<int> t(n);
    for (int i=0; i<n; i++) {
        cin>>t[i];
    }
    int result;
    result = costOfUniformity(n,x,t);
    cout<<result;
    return 0;
}