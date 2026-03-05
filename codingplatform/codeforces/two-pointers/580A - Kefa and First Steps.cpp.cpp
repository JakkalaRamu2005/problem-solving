#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n; 
	vector<int> arr;
	
	while(n--) {
	    int x; cin>>x; arr.push_back(x);
	}
	    
	
	int prev=arr[0];
	int max_sub = 1;
	int count = 1;
	for(int i=1; i<arr.size(); i++){
	    if(arr[i]>=prev){
	        count++;
	        prev=arr[i];
	        max_sub = max(count, max_sub);
	    }else{
	        count=1;
	        prev=arr[i];
	    }
	}
	
	cout << max_sub << endl;

}
