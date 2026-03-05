#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	vector<int> arr(n);
	int i=0; 
	while(n--){
	    cin>>arr[i];
	     i++;
	}
	    
	int prev=-1;
	int max_count =0;
	int count=0;
	for(int i: arr){
	    if(i>prev){
	        count++;
	        prev=i;
	        max_count=max(count,max_count);
	    }else{
	        prev=i;
	        count=1;
	    }
	}

cout << max_count << endl;
}
