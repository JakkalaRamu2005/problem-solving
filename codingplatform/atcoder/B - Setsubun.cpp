#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k; cin>>n>>k;
    int sum = n;
    int co = 0 ;
	while(true){
	    if(sum>=k){
	        cout << co << endl;
	        break;
	    }else{
	        co++;
	        n++;
	        sum=sum+n;
	    }
	    
	}

}
