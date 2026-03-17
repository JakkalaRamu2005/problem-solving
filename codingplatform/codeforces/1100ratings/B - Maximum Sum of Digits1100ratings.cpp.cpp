#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
	

	
	long long n; cin>>n;
	long long temp=n;
	int last;
	int c=0;
	while(temp>0){
	    last = temp%10;
	    temp = temp/10;
	    
	    c++;
	}
	
	c = c-1;
	long long s=0;
	int total = 0;
// 	total+=last-1;
	for(int i=1; i<=c; i++){
	    s = (s*10)+9;
	    total+=9;
	}
	
	long long remain = n-s;
	
	int s2 =0;
	while(remain>0){
	    s2+=remain%10;
	    remain = remain/10;
	}

    total+=s2;
    
    cout << total << endl;
	
	
	return 0;

}
