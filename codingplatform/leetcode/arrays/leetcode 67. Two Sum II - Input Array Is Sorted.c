#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int> nums = {3,2,4};
  int target = 9;
  
  int left = 0;
  int right = nums.size()-1;
  while(left<right){
      int sum = nums[left]+nums[right];
      if(sum==target){
          cout << left << " " << right << endl;
          break;
      }else if(sum>target){
          right--;
      }else{
          left++;
      }
  }
 

        
  return 0;
}
