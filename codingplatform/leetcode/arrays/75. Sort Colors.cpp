#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    vector<int> nums={2,3,3,4,5,6,7,8,9,10};
    int n = nums.size();
    
    // cout << n << endl;
bool is_sorted = true; 
    for(int i=0; i<n-1; i++){
        if(nums[i+1]>=nums[i]){
            
        }else{
            is_sorted=false;
            break;
        }
    }
    
    if(is_sorted){
        cout << "array is sorted";
    }else{
        cout << "array is not sorted";
    }

  


    vector<int> arr={1,2,0};
    int n = arr.size();
    
    for(int i=0; i<=n-2; i++){
        
        int minIn = i;
        
        for(int j=i+1; j<=n-1; j++){
            
           if(arr[j]>arr[i]){
               minIn=j;
           }
           
           swap(arr[minIn],arr[j]);
        }
        
        
    }
   
   
   for(auto num: arr){
       cout << num << " ";
   }
}
