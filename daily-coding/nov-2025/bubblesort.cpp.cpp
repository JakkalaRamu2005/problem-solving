#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> nums={298, 529, 903, 268, 960, 210, 123, 835, 626};
	int n=nums.size();
	
// 	// for the ascending order 
	
// 	for(int i=n-1; i>0; i--){
// 	   // cout << i << " ";
// 	    for(int j=0; j<i; j++){
// 	        if(nums[j]>nums[i]) swap(nums[j],nums[i]);
// 	    }
// 	   // cout << endl;
// 	}
	
// 	for(auto x: nums) cout << x << " ";
	

	
	// for the decending order,
	
	for(int i=n-1; i<n; i--){
	    
	    for(int j=0; j<i; j++){
	        
	        if(nums[j]<nums[i]) swap(nums[j],nums[i]);
	    }
	}

	for(auto x: nums) cout << x << " ";

}
