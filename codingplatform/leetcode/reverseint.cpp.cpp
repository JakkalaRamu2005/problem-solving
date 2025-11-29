#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
class Solution {
public:
    int reverse(int n) {
        
        	long long sum =0;
	
	while(n!=0){
	    int last = n%10;
	   // cout << last << " ";
	    
	    sum = sum*10+last;
	    n = n/10;

        if(sum> INT_MAX || sum < INT_MIN){
            return 0;
        }
	    
	}
    return sum;




    }
};
	


}
