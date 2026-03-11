#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n; cin>>n;
	
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    int c=0;
	    while(true){
	        if(a>b){
	           int re = a/b;
	           a = a%b;
	           c+=re;
	        }else{
	           int re = b/a;
	           b = b%a;
	           c+=re;
	        }
	        
	        if(a==0||b==0){
	            cout << c << endl;
	            break;
	        }
	    }
	    
	    
	    
	}


}
