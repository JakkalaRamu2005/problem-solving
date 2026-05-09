#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	/*
You are given a list of numbers.
Find the first number that is missing between
the smallest and the largest number.

Example 1:
Input: [1, 2, 4, 5]
Missing: 3

Example 2:
Input: [3, 4, 6, 7]
Missing: 5
*/

	
	
	
	vector<int> nums={9,6,4,2,3,5,7,0,1};
	sort(nums.begin(),nums.end());
	
    int start = nums[0];
    int end = nums[nums.size()-1];
    int found = false;
    
    for(int i=start; i<=end; i++){
        
        auto it = find(nums.begin(), nums.end(),i);
        
        if(it != nums.end()){
            
        }else{
            return i;
            found = true;
        }
    }
    
    if(!found){
        return nums.size();
    }
	
	 int n=nums.size();
        int sum=n*(n+1)/2;
        int s=0;
        for(int i=0; i<n; i++){
            s+=nums[i];
        }
        return sum-s;
    }

}
