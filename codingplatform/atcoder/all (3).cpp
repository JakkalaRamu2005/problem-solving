#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	

	int c= 0;
	
	for(int i=2; i<10; i++){
	    
	    int co=0;
	    for(int j=1; j*j<=i; j++){
	        int n = i;
	        if(n%j==0){
	            co++;
	        }
	        if((j!=(n/j))&&((n%n/j)==0)){
	            co++;
	        }
	        
	    }
	    
	    if(co>=2){
	           c++; 
	        }
	    
	   // cout << endl;
	}
	
	cout << c << endl;

}
