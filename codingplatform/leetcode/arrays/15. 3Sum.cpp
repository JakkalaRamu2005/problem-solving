#include <bits/stdc++.h>
using namespace std;
//broute force solution
int main() {
	// your code goes here
// 	Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
	vector<int> arr= {-1,0,1,2,-1,-4};
	int n = arr.size();
    
    set<vector<int>> st;
    
    for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
            
            
            for(int k=j+1; k<n; k++){
                
                if(arr[j]+arr[i]+arr[k]==0){
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                
            }
        }
        
    }
    
    vector<vector<int>> ans(st.begin(),st.end());
    
    int m = ans.size();
    // cout << m << endl;
    for(int i=0; i<m; i++){
        for(auto j: ans[i]){
            cout << j << " ";
        }
        cout << endl;
    }

}
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> nums = {0,0,0};
	
	sort(nums.begin(),nums.end());
	
	
	vector<vector<int>> result;
	int n = nums.size();
	
	
	for(int i=0; i<n; i++){
	    if(i>0&&nums[i]==nums[i-1]) continue;
	    int j = i+1;
	    int k = n-1;
	    
	    while(j<k){
	        int total = nums[i]+nums[j]+nums[k];
	        if(total>0){
	            k--;
	        }else if(total<0){
	            j++;
	        }else{
	            vector<int> temp = {nums[i],nums[j],nums[k]};
	            result.push_back(temp);
	            j++;
	            k--;
	            while(j<k&&nums[j-1]==nums[j]) j++;
	            while(j<k&&nums[k]==nums[k+1]) k++;
	        }
	    }
	    
	}
	
	
	for(int i=0; i<result.size(); i++){
	    for(int j: result[i]){
	        cout << j << " ";
	    }
	    cout << endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;

}


// n2 better solution for the same question.
 int n = arr.size();
        set<vector<int>> st;

        for(int i=0; i<n; i++){
            set<int> hashset;
            for(int j=i+1; j<n; j++){
                int third = -(arr[i]+arr[j]);
                if(hashset.find(third)!=hashset.end()){
                    vector<int> temp = {arr[i],arr[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(arr[j]);
            }
        }

        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
        
