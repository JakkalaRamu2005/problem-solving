#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
        if(n==0){
            return 0;
        }else if(n%9==0){
            return 9;
        }else{
            return n%9;
        }

        
    }
	
	
	
	int n = 123;
	int sum=0;
    
    bool condition = true;
    while(condition){
        
        
        while(n!=0){
            int last = n%10;
            sum+=last;
            n = n/10;
        }
        
        if(sum>9){
            n = sum;
            sum=0;
            
        }else{
            condition=false;
            cout << sum << endl;
        }
    }
    




}
