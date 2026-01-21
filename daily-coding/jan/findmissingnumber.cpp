class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int sum = (n*(n+1))/2;
        for(int i: nums){
            sum-=i;
        }

        return sum;
    }
};


	
	// broote force solution 
    vector<int> arr={9,6,4,2,3,5,7,0,1};
    
    int n = arr.size();
    
    for(int i=0; i<n; i++){
            int found=0;
        for(int j=0; j<n; j++){
            if(arr[j]==i){
                found=1;
                break;
            }
        }
        
        if(found==0){
            cout << i << endl;
        }
    }
    
    // the broote force solution for this question find missing number 
    // the time complexity is going to nearly (on2) for the worst case 
    // the space complexity is going to be 01 space 
    
    #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    vector<int> arr={9,6,4,2,3,5,7,0,1};
    //better solution for the 
    vector<int> ans(arr.size(),0);
    
    int n = arr.size();
    for(int i=0; i<n; i++){
        ans[arr[i]]=1;
    }
    // for(auto i: ans){
    //     cout << i << " ";
    // }
    
    for(int j=0; j<n; j++){
        if(ans[j]==0){
            cout << j << endl;
            break;
        }
    }
    // I am using the hashmap, here with the vector, where i am marking the visited elements and in the ans vector which I have created
    // if I am not visited it it's going to be my answer finally, I will return that answers finally.
    
    
   
    
    
    
    

}

