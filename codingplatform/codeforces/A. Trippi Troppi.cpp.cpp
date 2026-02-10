#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	vector<string> st;
	for(int i=0; i<=n; i++){
	    string s; getline(cin,s);
	    st.push_back(s);
	    
	}
	
	for(auto i: st){
	    string result="";
	    stringstream ss(i);
	    string word;
        while(ss>>word){
            cout << word[0];
        }	    
        
        cout << endl;
	}
	

}
