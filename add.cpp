#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subArray(vector<vector<int>> &res, vector<int> &arr, int n)
{
    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            vector<int> tArr;
            for (int k=i; k<=j; k++) {
                // cout << arr[k] << " ";
                tArr.push_back(arr[k]);
            }
            res.push_back(tArr);
        }
    }
    return res;
}

vector<vector<int>> allSArrays(vector<vector<int>> &res, vector<int> &arr, int start, int end)
{ 
    if (end == arr.size())
        return res;
       
    else if (start > end)
        allSArrays(res, arr, 0, end + 1);
           
    // Print the subarray and increment the starting point
    else
    {
        vector<int> tAr;
        for (int i = start; i < end; i++){
            // cout << arr[i] << ", ";
            tAr.push_back(arr[i]);
        }
        tAr.push_back(arr[end]);
         
        // cout << arr[end] << "]" << endl;
        res.push_back(tAr);
        allSArrays(res, arr, start + 1, end);
    }
     
    return res;
}

bool isDivisible(int num, int n) {
    return (num%n == 0);
}
int isPossibleToAchieve(int n, int k, int a) {
    vector<int> arr;
    vector<vector<int>> res; 
    for (int i=n-1; i>=0; i--) {
        arr.push_back(a%10);
        a/=10;
    }
    vector<vector<int>> suArr = subArray(res, arr, arr.size());
    // vector<vector<int>> suArr = allSArrays(res, arr, 0, arr.size()-1);
    for (int i=0; i<suArr.size(); i++) {
        int pAns=0;
        for (int j=0; j<suArr[i].size(); j++) {
            cout<<suArr[i][j]<<" ";
            pAns=pAns*10+suArr[i][j];
        }
        if (isDivisible(pAns, k)) {
            return 1;
        }
        // cout<<isDivisible(pAns, k);
        cout<<endl;
    }
    return 0;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
           
        int n, k;
        cin>>n>>k;
        int a;
        cin>>a;
        isPossibleToAchieve(n, k, a);
        cout<<endl;
    }
    return 0;
}