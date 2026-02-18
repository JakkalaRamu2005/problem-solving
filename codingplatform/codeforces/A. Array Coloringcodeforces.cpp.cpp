#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n; cin>>n;
	for(int i=0; i<n; i++){
	    bool condi = true;
	    int x; cin>>x;
	    unordered_map<int,string>mpp;
	    vector<int> nums(x);
	    for(int j=0; j<x; j++){
	        int y; cin>>y;
	        nums[j]=y;
	        if(j%2==0){
	            mpp[y]="red";
	        }else{
	            mpp[y]="blue";
	        }
	    }
	    
	  sort(nums.begin(),nums.end());
	  
	  for(int k=1; k<x; k++){
	      if(mpp[nums[k-1]]==mpp[nums[k]]){
	          cout << "No" << endl;
	          condi = false;
	          break;
	          
	      }
	  }
	  
	  if(condi){
	      cout << "Yes" << endl;
	  }
	  
	}
	

}
