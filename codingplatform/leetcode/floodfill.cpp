#include<bits/stdc++.h>
using namespace std;
 
 void dfs(int i,int j,int ele, int color, vector<vector<int>> &image,vector<vector<int>> &visited){
     visited[i][j]=1;
     image[i][j]=color;
     int r= image.size();
     int c= image[0].size();
     if(i-1>=0&& image[i-1][j]==ele&&!visited[i-1][j]){
         dfs(i-1,j,ele,color, image, visited);
     }
     if(i+1<r&&image[i+1][j]==ele&&!visited[i+1][j]){
         dfs(i+1,j,ele,color, image, visited);
     }
     if(j-1>=0&&image[i][j-1]==ele&&!visited[i][j-1]){
         dfs(i,j-1,ele,color, image, visited);
     }
     if(j+1<c&&image[i][j+1]==ele&&!visited[i][j+1]){
         dfs(i,j+1,ele,color,image,visited);
     }
 }
 
 
int main() {
  // write your code here...
//   image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
  vector<vector<int>> image={{1,1,1},{1,1,0},{1,0,1}};
  int r = image.size();
  int c = image[0].size();
  int sr = 1,sc=1,color=2;
  int i = sr;
  int j = sc;
  int ele = image[i][j];
  vector<vector<int>> visited(r,vector<int>(c,0));
  dfs(i,j,ele,color,image,visited);
  
  for(int i=0; i<r; i++){
      for(int j:image[i]){
          cout<<j<<" ";
      }
      cout<<endl;
  }
  
  return 0;
}
