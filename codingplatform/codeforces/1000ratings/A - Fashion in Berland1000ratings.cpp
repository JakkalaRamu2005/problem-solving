#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n; cin>>n;
	
	if(n==1){
	    int a; cin>>a;
	    if(a==1) cout << "YES";
	    else cout << "NO";
	}else{
	    int c=0;
	    
	    for(int i=0; i<n; i++){
	        int a; cin>>a;
	        if(a==0)c++;
	    }
	    
	    if(c==1){
	        cout << "YES";
	    }else{
	        cout << "NO";
	    }
	}
	
	return 0;
	

}
