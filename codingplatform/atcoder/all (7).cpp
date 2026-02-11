#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	bool condi = true;
	int co=0;
	string result="";
	for(int i=0; i<n; i++){
	    char s; cin >> s;
	    int len; cin>>len;
	    
	    co+=len;
	    if(co<=100){
	        for(int i=0; i<len; i++){
	            result+=s;
	            
	        }
	    }else{
	        cout << "Too Long" << endl;
	        condi = false;
	        break;
	    }
	
	}
	if(condi){
	   cout << result << endl;
	}

	
	

}
