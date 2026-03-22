#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	string s; cin>>s;
	unordered_map<int,char> mpp;
	for(int i=0; i<n; i++){
	    if(s[i]!='.') mpp[i]=s[i];
	}
	
	vector<string> words={"vaporeon","jolteon","flareon","espeon","umbreon","leafeon","glaceon","sylveon"};
	
	for(string st: words){
	    if(st.size()==n){
	        int co=0;
	        for(auto pa: mpp){
	            if(st[pa.first]==pa.second)co++;
	        }
	        
	        if(co==mpp.size()){
	            cout << st << endl;
	            break;
	        }
	    }
	}
	

}
