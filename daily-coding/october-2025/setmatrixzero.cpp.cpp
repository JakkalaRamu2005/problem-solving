#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
	int n = matrix.size();
// 	cout << n << endl;
	vector<int> row;
	vector<int> column;
	
	for(int i=0; i<n; i++){
	    
	    for(int j=0; j<n; j++){
	        
	        if(matrix[j][i]==0){
	            row.push_back(i);
	        }
	    }
	    cout << endl;
	}
	
	for(int i=0; i<n; i++){
	    
	    for(int j=0; j<n; j++){
	        
	        if(find(row.begin(), row.end()),i){
	            cout << i << endl;
	        }
	    }
	}

}
