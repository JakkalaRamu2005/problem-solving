#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n; cin>>n;
	vector<vector<int>> nums;
	for(int i=0; i<n; i++){
	    vector<int> sub;
	    int num; cin>>num;
	    
	    for(int i=0;i<num; i++){
	        int k; cin>>k;
	        sub.push_back(k);
	    }
	    nums.push_back(sub);
	}
	
	
	for(int i=0; i<nums.size(); i++){
	    for(int j: nums[i]){
	        cout << j << " ";
	    }
	    cout << endl;
	}

}
