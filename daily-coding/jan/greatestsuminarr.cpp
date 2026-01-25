#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
// 	2, 3, -8, 7, -1, 2, 3
	vector<int> arr={-2, -4};
	
	/// I have to solve this question  by writing the brute force solution
	
	int n = arr.size();
	int max=INT_MIN;
	
	for(int i=0; i<n; i++){
	   // cout << i << " ";
	    int sum=0;
	   for(int j=0; j<n; j++){
	      
	       for(int k=i; k<=j; k++){
	          cout << arr[k] << " ";
	       }
	       
	       //cout << endl;
	       
	       cout << sum << " ";
	       
	   }
	   if(sum>max) max = sum;
	}
	
	
	
	
// 	cout << max << endl;
	    
	    
	  
return 0;

}
