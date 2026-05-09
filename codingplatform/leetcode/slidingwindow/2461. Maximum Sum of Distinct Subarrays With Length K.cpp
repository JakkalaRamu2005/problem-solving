class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        	    
		long long sum=0;
	long long max_sum = 0;
	unordered_map<int,int> mpp;
	for(int i=0; i<k; i++){
	    sum+=arr[i];
	    mpp[arr[i]]++;
	   
	}
    if(mpp.size()==k){
        max_sum = sum;
    }

	
	
	for(int j=k; j<arr.size(); j++){
	   
	   mpp[arr[j]]++;
	   sum+=arr[j]-arr[j-k];
	   if(mpp[arr[j-k]]>1){
	       mpp[arr[j-k]]--;
	   }else{
	       mpp.erase(arr[j-k]);
	   }
	   
	   if(mpp.size()==k){
	       max_sum = max(sum,max_sum);
	   }
	}
    return max_sum;
    }
};
