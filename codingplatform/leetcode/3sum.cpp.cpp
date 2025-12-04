#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	vector<int> nums = {0,1,1};
	
	int n = nums.size();
	
    vector<vector<int>> unique;

    for(int i=0; i<n; i++){
        vector<int> s;
        for(int j=i+1; j<n; j++){
            
              for(int k=j+1; k<n; k++){
                  
                  
                  bool condi = i!=j && i!=k && j!=k;
                  
                  if(nums[i]+nums[j]+nums[k]==0 && condi){
                      
                     s.push_back(nums[i]);
                     s.push_back(nums[j]);
                     s.push_back(nums[k]);
                      
                  }
                  
        }
            
        }
        
      
      
      unique.push_back(s);
      
    }
    
    


for(auto &v: unique){
    
    for(auto &x: v){
        cout << x << " ";
    }
    
    cout << endl;
}
    
    
    
   

}
