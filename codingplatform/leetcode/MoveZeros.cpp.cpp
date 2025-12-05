#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	/*
QUESTION (Move Zeroes)283

You are given an array of numbers.
Your job is to push all the zeroes to the end of the array,
but you must keep the order of the non-zero numbers the same.
You must do this inside the same array (no extra array allowed).

Example:
Input:  [0, 1, 0, 3, 12]
Output: [1, 3, 12, 0, 0]
Meaning: All non-zero numbers stay in the same order,
and all zeroes get moved to the end.

Constraints (Simple English):
- Array size can be from 1 to 10,000 elements.
- Numbers can be very small or very big (within normal int range).
- Must not use extra space — modify the given array itself.
- Try to do it with minimum operations.
*/
	
	vector<int> nums={1,2,3,3,0,0,0,3,2,4};
	
	
	int n = nums.size();
	
    vector<int> nonZeroElements;
    
    for( auto i: nums){
        
        if(i!=0){
            nonZeroElements.push_back(i);
        }
    }
    
    
    
   for(int i=nonZeroElements.size(); i<n; i++){
       nonZeroElements.push_back(0);
   }
   
   
   
   // optimized solution:
   
    int p = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[p++] = nums[i];
            }
        }
        for(int i=p;i<nums.size();i++){
            nums[i] = 0;
        }
    }
   
 

}
