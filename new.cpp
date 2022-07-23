#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
string s;
getline(cin,s);
string temp;
unordered_map<string,int>um;
for(int i=0;i<s.size();i++){
if(s[i]==' '){
    um[temp]++;
    temp="";
}else{
    temp.push_back(s[i]);
}
}
um[temp]++;
bool flag=0;
vector<string> mem;
unordered_map<string, int>:: iterator it;
for(auto it=um.begin();it!=um.end();it++){
    if(it->second >1){
        // cout<<it->first<<" ";
        mem.push_back(it->first);
        flag=1;
    }
}
sort(mem.begin(), mem.end());
for (int i=0; i<mem.size(); i++) {
    cout<<mem[i]<<" ";
}

if(flag==0){
    cout<<"NA";
}
return 0;
}