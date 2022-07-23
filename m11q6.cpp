#include<bits/stdc++.h>
using namespace std;

string gameWinner(string colors) {
    int wc=0, bc=0;
    for (int i=1; i<colors.size()-1; i++) {
        if (colors[i-1] == 'w' && colors[i] == 'w' && colors[i+1] == 'w') {
            wc++;
        }
    }
    for (int i=1; i<colors.size()-1; i++) {
        if (colors[i-1] == 'b' && colors[i] == 'b' && colors[i+1] == 'b') {
            bc++;
        }
    }
    cout<<wc<<' '<<bc<<endl;

    if (wc-bc >= 1) {
        return "Wendy";
    }
    return "Bob";
}

int main() {
    string colors;
    cin>>colors;
    cout<<gameWinner(colors)<<endl; 
    return 0;
}