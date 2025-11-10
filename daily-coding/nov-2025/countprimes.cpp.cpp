#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n=3;

vector<int> primes(n+1,1);
primes[0]=0;
primes[1]=0;


for(int i=2; i<=n; i++){
    
    
    if(primes[i]){
        
        for(int j=i*i; j<=n; j+=i){
            primes[j]=0;
        }
        
    }
    
    
}

cout << count(primes.begin(), primes.end(),1) << endl;

for(int i=0; i<n; i++){
    
}










}
