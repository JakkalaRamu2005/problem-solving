#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	string s; cin>>s;
	string result="";
	string word="";
	for(int i=0; i<s.size(); i++){
	    if(i + 2 < s.size() && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        result+=word+" ";
	        word="";
	    }else{
	        word+=s[i];
	       // cout << s[i];
	    }
	}
	
	cout << result + word << endl;
// 	cout << word << endl;
    

}
