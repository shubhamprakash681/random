#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(2, 100);
    for (vector<int>::iterator i=v.begin(); i<v.end(); i++) {
        cout<<*(i)<<" ";
    }
    cout<<v.back();
    cout<<endl;

    //alt. method:-
    for (auto it:v) {
        cout<<it<<" ";
    }
    return 0;
}