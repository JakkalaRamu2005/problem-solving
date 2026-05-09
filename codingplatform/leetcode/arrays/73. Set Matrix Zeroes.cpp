class Solution {
public:


void row(vector<vector<int>> &copyMatrix,int n, int m, int row,int column){
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            
            if(row==i){
                copyMatrix[row][j]=0;
            }
            if(column==j){
                copyMatrix[i][column]=0;
            }
            
        }
        
    }
    
    
}

    void setZeroes(vector<vector<int>>& matrix) {
    vector<vector<int>> copyMatrix = matrix;
	int n = matrix.size();
	
	int m = matrix[0].size();
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        
	        bool zero = matrix[i][j] ==0;
	        if(zero){
	            row(copyMatrix,n,m,i,j);
	        }
	    }
	   
	}
	
        
    matrix = copyMatrix;
    }
};
