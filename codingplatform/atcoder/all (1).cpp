#include <bits/stdc++.h>
using namespace std;


void row(int i,int j,int n,vector<vector<int>> &matrix){
    // vector<int> ro = matrix[i];
    for(int i=0; i<n; i++){
        cout << matrix[i][j] << " ";
    }
}


void column(int j, int m,vector<vector<int>> &matrix){
    vector<int> co = matrix[j];
    for(int i=0; i<m; i++){
    //   cout << co [i] << " ";
    }
}


int main() {
    vector<vector<int>> matrix={{1,-1,1},
                                {-1,0,1},
                                {1,-1,1}};
    int n = matrix.size();
    int m = matrix[0].size();
    
    for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){
            
            if(matrix[i][j]==0){
                row(i,j,n,matrix);
                column(j,m,matrix);
            }
            
        }
        
    }
    
      
    // for(int i=0; i<n; i++){
        
    //     for(int j=0; j<m; j++){
            
    //         cout << matrix[i][j] << " ";
            
    //     }
    //     cout << endl;
        
    // }
    
    
    

}
