class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
vector<int> neg;
// vector<int> nums={3,1,-2,-5,2,-4};
for(int i: nums){
    if(i>=0) pos.push_back(i);
    else neg.push_back(i);
}

int mid = nums.size()/2;
for(int i=0; i<mid; i++){
    nums[2*i]=pos[i];
    nums[2*i+1]=neg[i];
}

return nums;
    }
};


//optimal solution  force solution

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
int n = arr.size();
vector<int> ans(n,0);

int pos=0;
int neg=0;
for(int i=0; i<n; i++){
    if(arr[i]>=0){
        
        ans[2*pos]=arr[i];
        pos++;
    }else{
        ans[(2*neg)+1]=arr[i];
        neg++;
    }
}
return ans;
    }
};
