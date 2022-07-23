#include<bits/stdc++.h>
using namespace std;

int main() {
    string givStr;
    cin>>givStr;
    int n=givStr.size();
    int mismatch=0; 
    char ch=givStr[0];
    string myStr="";

    if(n%2==0){
		    if(ch=='G'){
		        for(int i=0;i<n;i++){
		            if(i%2==0){
		            myStr=myStr+ 'G';
		            }
		            else{
		                 myStr=myStr+ 'B';
		            }
		        }
		    }
		    if(ch=='B'){
		        for(int i=0;i<n;i++){
		            if(i%2==0){
		            myStr=myStr+'B';
		            }
		            else{
		                 myStr=myStr+ 'G';
		            }
		        }
		    }
		    
		}
		else{
		    
		    if(ch=='G'){
		        for(int i=0;i<n;i++){
		            if(i%2==0){
		            myStr=myStr+ 'G';
		            }
		            else{
		                 myStr=myStr+ 'B';
		            }
		        }
		    }
		    if(ch=='B'){
		        for(int i=0;i<n;i++){
		            if(i%2==0){
		            myStr=myStr+'B';
		            }
		            else{
		                 myStr=myStr+'G';
		            }
		        }
		    }
		    
		}

        for(int i=0;i<n;i++){
		    if(givStr[i] != myStr[i]){
		        mismatch++;
		    }
		}

        cout<<mismatch/2;
    return 0;
}