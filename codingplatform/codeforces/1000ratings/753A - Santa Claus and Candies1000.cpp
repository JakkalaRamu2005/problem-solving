#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	set<int> s;
	int sum=0;
	for(int i=1; i>=0; i++){
	    sum+=i;
	    s.insert(i);
	    if(sum>=n)
	        break;
	   
	}
	
	
	if(sum>n) s.erase(sum-n);
	cout << s.size() << endl;
	for(int x: s) cout << x << " ";
	
	

}
