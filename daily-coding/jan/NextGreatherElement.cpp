#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  vector<int> nums = {7,3,1,5,8,4};
  int n = nums.size();
  vector<int> arr(n,-1);
 
  for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
          if(nums[j]>nums[i]){
              arr[i]=nums[i];
              break;
          }
      }
  }
  
  for(auto i: arr){
      cout << i << " ";
  }
  return 0;
}
