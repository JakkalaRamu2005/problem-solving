#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; cin>>t;
	while(t--){
	    	long long n,k; cin>>n>>k;
	long long c=0;
	
	while(true){
	    
	    if(n%k==0){
	        c++;
	        n = n/k;
	    }else{
	        long long re = n%k;
	        n-=re;
	        c+=re;
	    }
	    
	    if(n==0){
	        cout << c << endl;
	        break;
	    }
	    
	}
	}
	


}
