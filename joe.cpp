#include<bits/stdc++.h>
using namespace std;

int winningStrategy(int x, int y, int z) {
    int ans=0;
    int cr=2;
    vector<int> v1;
    vector<int> v2;
    // int temp=x;
    int pl=0;
    int cl=0;
    int t1=0;
    int t2=1;

    while (t2>t1) {
        if (z%cr==0) {
            t2=z/cr;
        }else {
            t2=z/cr + 1;
        }

        int num=(x-pl);
        if (num%cr==0) {
            t1=num/cr;
        }else {
            t1=num/cr + 1;
        }
        ans+=min(t1, t2);
        cout<<"t1="<<t1<<" t2="<<t2<<endl;
        v1.push_back(min(t1, t2));
        cl=pl + (t1*cr)-x;
        pl=cl;
        cr+=y;
    }

    for (int i=0; i<v1.size(); i++) {
        cout<<v1[i]<<" ";
    }
    cout<<"exiting return ans is";
    return ans;
}

int main() {
    int x,y,z;
    cin>>x>>y>>z;
    cout<<winningStrategy(x, y, z)<<endl;
    return 0;
}