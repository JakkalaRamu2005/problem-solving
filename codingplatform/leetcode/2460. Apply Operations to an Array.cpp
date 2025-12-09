#include <bits/stdc++.h>
using namespace std;
/*
LeetCode 2460. Apply Operations to an Array

You are given a 0-indexed array nums consisting of non-negative integers.
You need to apply n - 1 operations to this array.

For every index i (0 ≤ i < n-1):
    If nums[i] == nums[i+1]:
        nums[i] = nums[i] * 2
        nums[i+1] = 0

After doing all operations, move all the zeros in the array to the end.
Return the new array.

Example:
Input:  [1,2,2,1,1,0]
Output: [1,4,2,0,0,0]

Explanation:
i = 1 → 2 == 2 → nums becomes [1,4,0,1,1,0]
i = 3 → 1 == 1 → nums becomes [1,4,0,2,0,0]

Constraints:
2 <= nums.length <= 2000
0 <= nums[i] <= 1000
*/


int main() {
	// your code goes here
vector<int> nums = {1,2,2,1,1,0};

int n = nums.size();

for(int i=0; i<n-1; i++){
    if(nums[i]==nums[i+1]){
        nums[i]=nums[i]*2;
        nums[i+1]=0;
    }
}


int i=0;

for(int j=0; j<n; j++){
    
   if(nums[j]!=0){
       swap(nums[j],nums[i]);
       i++;
   }
    
}

for(auto el: nums){
    cout << el << " ";
}


}
