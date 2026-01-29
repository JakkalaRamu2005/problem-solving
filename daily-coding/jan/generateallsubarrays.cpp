#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> arr={1, 2, 3};
	
	vector<vector<int>> ans;
	
	int n  = arr.size();
	int index=0;
	for(int i=0; i<n; i++){
	    
	    for(int j=i; j<n; j++){
	        vector<int> sub;
	        for(int k=i; k<=j; k++){
	             sub.push_back(arr[k]);
	        }
	       ans.push_back(sub);
	    }
	    
	}
	
	int nn = ans.size();
// 	cout << nn << endl;

for(int i=0; i<nn; i++){
    for(int j=0; j<ans[i].size(); j++){
        cout << ans[i][j] << " ";
    }
    cout << endl;
}
	
	
	


}
