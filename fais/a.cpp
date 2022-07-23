#include<bits/stdc++.h>
using namespace std;

int main() {
    string str, cstr="";
    cin>>str;
    int count = 0;

    if (str.size() == 0) {
        if (str[0] == 'G') {
            for(int i=0;i<str.size();i++){
		            if(i%2==0){
		                cstr += 'G';
		            }
		            else{
		                cstr += 'B';
		            }
		        }
        }

        if (str[0] == 'B') {
            for(int i=0;i<str.size();i++){
		            if(i%2==0){
		                cstr += 'B';
		            }
		            else{
		                cstr += 'G';
		            }
		        }
        }
    }else {
        if (str[0] == 'G') {
            for(int i=0;i<str.size();i++){
		            if(i%2==0){
		                cstr += 'G';
		            }
		            else{
		                cstr += 'B';
		            }
		        }
        }

        if (str[0] == 'B') {
            for(int i=0;i<str.size();i++){
		            if(i%2==0){
		                cstr += 'B';
		            }
		            else{
		                cstr += 'G';
		            }
		        }
        }
    }


    for(int i=0; i<str.size(); i++){
        if(str[i] != cstr[i]) {
            count++;
        }
    }

    cout<<count/2;
    return 0;
}