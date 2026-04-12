#include <bits/stdc++.h>
using namespace std;

class solution{
public :
    bool bfs(int i, vector<vector<int>> &adj, vector<int>& visited){
        queue<pair<int,int>> q;
        q.push({i,-1});
        visited[i]=1;
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto child: adj[node]){
                if(visited[child]&&child!=parent){
                    return true;
                }else if(!visited[child]){
                    q.push({child,node});
                    visited[child]=1;
                }
            }
            
        }
          return false;
    }
    bool checkCycle(int n,vector<vector<int>>& adj) {
        // Write your code here...
        vector<int> visited(n,0);
        for(int i=0; i<n; i++){
            if(!visited[i]){
                if(bfs(i,adj,visited)){
                    return true;
                }
            }
        }
        
        return false;
        
    }
};