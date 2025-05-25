#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int n;
  cin >> n;
  int nums[n];
  int arr[n];
  for (int i=0; i<n; i++){
      cin >> nums[i];
  }
    for (int i=0; i<n; i++){
        int count = 0;
     for (int j=i+1; j<n; j++){
         if(nums[j]<nums[i]){
             arr[i]=nums[j];
             count+=1;
             break;
         }
     }
     if (!count>0){
            arr[i]=-1;
    }
  }
 
 
   for (int i=0; i<n; i++){
      cout << arr[i] << " ";
  }
  
  return 0;
}