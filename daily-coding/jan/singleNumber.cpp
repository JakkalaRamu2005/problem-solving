class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // using map to solve the questoins of the single number and single number iii in the leet code
        unordered_map<int,int> mpp;

        int n = nums.size();
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};



class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        	int n = arr.size();
	unordered_map<long long, int> mpp;
	
	for(int i=0; i<n; i++){
	    mpp[arr[i]]++;
	}
	vector<int> result;
	
	for(auto it: mpp){
	    if(it.second==1){
	        result.push_back(it.first);
	    }
	}

    return result;
    }
};
