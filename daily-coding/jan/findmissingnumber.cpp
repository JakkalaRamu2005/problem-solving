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
    
    
