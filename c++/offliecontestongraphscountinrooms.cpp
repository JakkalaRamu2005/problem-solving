#include <bits/stdc++.h>
using namespace std;
int bfs(int i,int j,vector<vector<int>> &adj, vector<vector<int>> &visited, int ans){
    int r = adj.size();
    int c = adj[0].size();
    visited[i][j]=1;
    if(i-1>=0&&adj[i-1][j]==1&&!visited[i-1][j]){
        bfs(i-1,j,adj,visited,ans);
    }
    
    if(i+1<r&&adj[i+1][j]==1&&!visited[i+1][j]){
        bfs(i+1,j,adj,visited,ans);
    }
    if(j-1>=0&&adj[i][j-1]==1&&!visited[i][j-1]){
        bfs(i,j-1,adj,visited,ans);
    }
    
    if(j+1<c&&adj[i][j+1]==1&&!visited[i][j+1]){
        bfs(i,j+1,adj,visited,ans);
    }
    
    return ans;
}
int main() {
	// your code goes here
	
	int r,c; cin>>r>>c;
	vector<vector<int>> adj;
	for(int i=0; i<r; i++){
	    vector<int> temp;
	    for(int j=0; j<c; j++){
	        char ch; cin>>ch;
	        if(ch=='#'){
	            temp.push_back(0);
	        }else if(ch=='.'){
	            temp.push_back(1);
	        }
	    }
	    adj.push_back(temp);
	   // cout<<endl;
	}
	
	vector<vector<int>> visited(r,vector<int>(c,0));
	int ans=0;
	for(int i=0; i<r; i++){
	    for(int j=0; j<c; j++){
	        if(adj[i][j]==1&&!visited[i][j]){
	            ans++;
	            bfs(i,j,adj,visited,ans);
	        }
	    }
	}
	cout<<ans<<"\n";


	
	return 0;

}
