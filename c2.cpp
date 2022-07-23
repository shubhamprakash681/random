#include<bits/stdc++.h>
using namespace std;

string keypadDecode(string);

int main() {
    int N;
    cin>>N;
    while (N--) {
        string keypad;
        cin>>keypad;
        cout<<keypadDecode(keypad)<<endl;
    }
    return 0;
}


string keypadDecode(string keypad) {
    string one = ",@";
    string two = "ABCabc2";
    string three = "DEFdef3";
    string four = "GHIghi4";
    string five = "JKLjkl5";
    string six = "MNOmno6";
    string seven = "PQRSpqrs7";
    string eight = "TUVtuv8";
    string nine = "WXYZwxyz9";
    string zero = " 0";
    string ans = "";
    int pi=0;
    int pCount;
    char c, tc;
    int i;
    for (i=0; i<keypad.size()-1; i++) {
        if (keypad[i] == keypad[i+1]) {
            // cout<<1;
            pCount++;
        }else {

            pCount++;
            cout<<pCount<<endl;
            tc=keypad[i];
            // cout<<tc<<endl;
            switch (tc) {
                case '1':
                    c=one[pCount-1];
                    break;
                case '2':
                    c=two[pCount-1];
                    break;
                case '3':
                    c=three[pCount-1];
                    break;
                case '4':
                    c=four[pCount-1];
                    break;
                case '5':
                    c=five[pCount-1];
                    break;
                case '6':
                    c=six[pCount-1];
                    break;
                case '7':
                    c=seven[pCount-1];
                    break;
                case '8':
                    c=eight[pCount-1];
                    break;
                case '9':
                    c=nine[pCount-1];
                    break;
                case '0':
                    c=zero[pCount-1];
                    break;
            }
                
            ans.push_back(c);
            
            pCount=0;
        }
    }
    return ans;   
}