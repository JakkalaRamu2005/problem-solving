#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int k; cin>>k;
	string s; cin>>s;
	string result="";
	
	
	for(char ch: s){
	    
	    if(result.find(ch)==string::npos){
	        result+=ch;
	    }
	}
	
	
	
	bool flag = true;
	string ans="";
    for(char c: result){
        int co = count(s.begin(),s.end(),c);
        if(co%k!=0){
            cout << -1 << endl;
            flag = false;
            break;
        }else{
            int rep = co/k;
            for(int j=0; j<rep; j++){
                ans+=c;
            }
        }
    }
	    
	   
   sort(ans.begin(),ans.end());
   
	if(flag){
	    for(int i=0; i<k; i++){
	        cout << ans;
	    }
	}    
	
	return 0;

}
