#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t; cin>>s>>t;
	int c=0;
	int cap=0;
	for(int i=2; i<s.size(); i++){
	    if(isupper(s[i])){
	        char prev = s[i-1];
	        cap++;
	        if(t.find(prev)!=string::npos){
	            c++;
	        }
	    }
	}
	
	if(c==cap){
	    cout << "Yes" << endl;
	}else{
	    cout << "No" << endl;
	}
	

}
