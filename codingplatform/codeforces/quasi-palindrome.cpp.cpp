#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	string s= to_string(n);
	
	for(int i=s.size()-1; i>=0; i--){
	    if(s[i]=='0'){
	        s.erase(i,1);
	    }else{
	        break;
	    }
	}
	
	
	string palindrome;
		for(int i=s.size()-1; i>=0; i--){
	            palindrome+=s[i];
        }
	
	if(s==palindrome){
	    cout << "YES" << endl;
	}else{
	    cout << "NO" << endl;
	}
	

}
