#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s; cin>>s;
	int len = s.size();
	int co = 0 ;
	unordered_map<char,int> mpp;
   
	if(len%2==0){
	    for(int i=1; i<=len/2; i++){
	        if(s[2*i-2]==s[2*i-1]){
	            co++;
	        }
	    }
	    
	     for(char ch: s){
            mpp[ch]++;
        }
	    
	}else{
	    cout << "No" << endl;
	}
	
	int c = 0;
	for(auto it: mpp){
	    if(it.second==2){
	        c++;
	    }
	}
	
	if(c==co){
	    cout << "Yes" << endl;
	}else{
	    cout << "No" << endl;
	}
	
// 	cout << co << endl;
}
