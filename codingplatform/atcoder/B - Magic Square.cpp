#include <bits/stdc++.h>
using namespace std;

int main() {
int n; cin>>n;
// reading input from user 




vector<vector<int>> mat(n,vector<int>(n,0));
int r = 0;
int c = (n-1)/2;
mat[r][c]=1;
int k=1;
int condi = (n*n)-1;
// 8 1 6
// 3 5 7
// 4 9 2
// cout << 3%3 << endl;
while(condi--){
    
    int row = ((r-1)+n)%n;
    int col = (c+1)%n;
    if(mat[row][col]==0){
        r = row;
        c = col;
        mat[r][c]=k+1;
        k++;
        // cout << r << " " << c << endl;
    }else{
        row = (r+1)%n;
        if(mat[row][c]==0){
            r = row;
            mat[r][c]=k+1;
            k++;
            // cout << r << " " << c << endl;
        }
    }
}

for(auto i: mat){
    for(int j: i){
        cout << j << " ";
    }
    cout << endl;
}





}
