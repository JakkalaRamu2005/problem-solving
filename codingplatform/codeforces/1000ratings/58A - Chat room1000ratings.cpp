#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	string s; cin>>s;
	
	string st="hello";
	int i=0;
	int c=0;
	
	for(char ch: s){
	    if(ch==st[i]){
	        c++;
	        i++;
	    }
	}
	
    
    if(c==5)cout<<"YES";
    else cout<<"NO";
	
	
	
	
	
	
	return 0;
	

}
