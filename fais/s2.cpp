#include<bits/stdc++.h>
using namespace std;

void subStr(string str, map<string, int> &m) {
    for (int i = 0; i < str.size(); i++) {
        for (int j = i; j < str.size(); j++) {
            string temp = "";
            for (int k = i; k <= j; k++) {
                temp+=str[k];
                
            }
            m.insert(pair<string, int> (temp, temp.size()));
        }
    }
}


int main() {
    string s1, s2;
    cin>>s1>>s2;

    map<string, int> m1;
    map<string, int> m2;

    subStr(s1, m1);
    subStr(s2, m2);

    vector<pair<int, string>> v1;
    vector<pair<int, string>> v2;

    map<string, int>::iterator it;
    for (it = m1.begin(); it != m1.end(); ++it) {
        v1.push_back(pair<int, string>(it->second, it->first));
        // cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    for (it = m2.begin(); it != m2.end(); ++it) {
        v2.push_back(pair<int, string>(it->second, it->first));
        // cout<<it->first<<" "<<it->second<<endl;
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    // cout<<endl;
    // cout<<endl;

    vector<pair<int, string>>::iterator itr;
    for (itr=v1.begin(); itr!=v1.end(); itr++) {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<endl;
    for (itr=v2.begin(); itr!=v2.end(); itr++) {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<endl;
    cout<<endl;

    vector<pair<int, string>>::iterator itr2=v2.end()-1;
    vector<pair<int, string>>::iterator itr1=v1.end()-1;
    while (itr1>=v1.begin() && itr2>=v2.begin()) {
        if (itr1->first == itr2->first) {
            if (itr1->second == itr2->second) {
                // cout<<itr1->second<<" "<<itr2->second<<endl;
                cout<<(itr1->first) / pow(2, 0);
                return 0;
            }else if ((--itr1)->first == itr2->first) {
                itr1--;
            }else if ((--itr2)->first == itr1->first) {
                itr2--;
            }else {
                itr2--;
                itr1--;
            }
        }else if  (itr1->first > itr2->first) {
            itr1--;
        }else {
            itr2--;
        }
    }

    return 0;
}
