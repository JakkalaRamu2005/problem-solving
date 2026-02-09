#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n = 3;
	vector<vector<int>> matrix;
	int k=1;
	for(int i=0; i<n; i++){
	    vector<int> temp;
	    for(int j=1; j<=n; j++){
	        temp.push_back(k);
	        k++;
	    }
	    
	    matrix.push_back(temp);
	}
	
	
    vector<int> ans;
    int top=0;
    int right=n-1;
    int bottom=n-1;
    int left = 0;
    
    while(left<=right && top<=bottom){
        
        // left to right
        for(int i=left; i<=right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        
        for(int i=top; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        
        
        for(int i=right; i>=left; i--){
            ans.push_back(matrix[i][bottom]);
        }
        bottom--;
        
        for(int i=bottom; i>=top; i--){
            ans.push_back(matrix[left][i]);
        }
        left++;
        
        
    }
    
 
 for(auto i: ans){
     cout << i << " ";
 }
 

}
