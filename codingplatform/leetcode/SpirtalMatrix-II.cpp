#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n = 3;
	vector<vector<int>> matrix(n,vector<int>(n,0));

	
    vector<int> ans;
    int top=0;
    int right=n-1;
    int bottom=n-1;
    int left = 0;
    int k=1;
    
    while(left<=right && top<=bottom){
        
        // left to right
        for(int i=left; i<=right; i++){
            matrix[top][i]=k;
            k++;
        }
        top++;
        
        for(int i=top; i<=bottom; i++){
           matrix[i][right]=k;
           k++;
        }
        right--;
        
        if(top<=bottom){
            for(int i=right; i>=left; i--){
            matrix[bottom][i]=k;
            k++;
        }
        bottom--;
        }
        
        if(left<=right){
            for(int i=bottom; i>=top; i--){
            matrix[i][left]=k;
            k++;
        }
        left++;
        }
        
    }
    
 
    for(auto i: matrix){
        for(int j: i){
            cout << j << " ";
        }
        cout << endl;
    }
}
