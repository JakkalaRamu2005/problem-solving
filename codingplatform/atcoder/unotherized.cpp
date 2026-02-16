#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n; cin>>n;
    	int co=0;
	bool logged = false;
	for(int i=0; i<n; i++){
	    string s; cin>>s;
	    if(!logged){
	        if(s=="private"){
	            co++;
	        }
	    }
	    
	    if(!logged){
	        if(s=="login"){
	            logged = true;
	        }
	    }
	    
	    if(logged){
	        if(s=="logout"){
	            logged = false;
	        }
	    }
	}
	


	    
	
	
	
	cout << co << endl;

}
