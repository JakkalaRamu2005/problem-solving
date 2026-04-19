#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vll vector<long long> 
#define ll long long 
 
int main() {
  // write your code here...
 ll n,m; cin>>n>>m;
// this problem can solved using the graphs bfs, like number of nodes visited as such 
 // initially he is having the item1.
 // where he can give ai which he has and get the bi item, 
 // print the total count that he can obtain including the item1 
 vector<vi> adj(n+1);
 for(int i=1; i<=m; i++){
     int u,v; cin>>u>>v;
     adj[u].push_back(v);
    //  adj[v].push_back(u);
 }
 
 vi visited(n+1,0);
 visited[1]=1;
 queue<int> q;
 q.push(1);
 int ans = 1;
 while(!q.empty()){
     int node = q.front();
     q.pop();
     
     for(auto child: adj[node]){
         if(!visited[child]){
             ans++;
             visited[child]=1;
             q.push(child);
         }
     }
 }
 cout<<ans<<"\n";
 
 
  
  return 0;
}
