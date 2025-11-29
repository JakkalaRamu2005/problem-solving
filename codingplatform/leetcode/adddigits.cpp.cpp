#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	

	
class Solution {
public:
    int addDigits(int n) {

        	int le = to_string(n).length();
	
	while(le!=1){
	    int su=0;
	    
	    while(n>0){
	        int digit = n%10;
	        n =n/10;
	        su+=digit;
	        
	    }
	    
	    n = su;
	    le = to_string(n).length();
	   // cout << su << endl;
	    
	}
	
	return n;



        
    }
};

}
