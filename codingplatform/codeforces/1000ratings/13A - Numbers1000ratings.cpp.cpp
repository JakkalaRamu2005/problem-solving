#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n1; cin>>n1;
	int s=0;
	for(int i=2; i<n1; i++){
	    int su=0;
	    int n = n1;
	    while(n!=0){
	        int las = n%i;
	        su+=las;
	        n = n/i;
	    }
	    s+=su;
	}
	
	int den = n1-2;
	
	
	int g = __gcd(s,den);
	den /=g;
	s /= g;
	cout << s << "/" << den;
	
	
	
	return 0;

}
