#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n], b[n-1], c[n-2];
    map<int, int> ap;
    map<int, int> bp;
    map<int, int> cp;
    
    for (int i=0; i<n; i++) {
        int tmp;
        cin>>tmp;
        a[i] = tmp;
        ap[tmp] = 1;
    }
    for (int i=0; i<n-1; i++) {
        int tmp;
        cin>>tmp;
        b[i] = tmp;
        bp[tmp] = 1;
    }
    for (int i=0; i<n-2; i++) {
        int tmp;
        cin>>tmp;
        c[i] = tmp;
        cp[tmp] = 1;
    }
    

    map<int, int>::iterator ia=ap.begin();
    map<int, int>::iterator ib=bp.begin();
    
    while (true) {
        if((ia->first)!=ib->first)  {
            cout<<min((ia->first), (ia->first))<<" ";
            break;
        }
        ia++;
        ib++;
    }

    map<int, int>::iterator ib2=bp.begin();
    map<int, int>::iterator ic=cp.begin();
    while (true) {
        if((ib2->first)!=ic->first)  {
            cout<<min((ib2->first), (ic->first))<<" ";
            break;
        }
        ib2++;
        ic++;
    }
    // for (map<int, int>::iterator it=ap.begin(); it!=ap.end(); it++) {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // for (map<int, int>::iterator it=bp.begin(); it!=bp.end(); it++) {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}