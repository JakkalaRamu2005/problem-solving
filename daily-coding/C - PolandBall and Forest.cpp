#include<bits/stdc++.h>
using namespace std;
#define ll long long 


// the question is indirectly, number of the connected components in the graphs
// I am using the bfs, for this question to solve 
// still I have few confusion of what I am using the i values and values to construct the adjvacent matrix 
 
void bfs(vector<int> &visited, vector<vector<int>> &adj, vector<int>& arr, int i){
    //  int minimum = INT_MAX;
     queue<int> q;
     q.push(i);
     visited[i]=1;
    //  int minimum =arr[i];
     while(!q.empty()){
         int node = q.front();
         q.pop();
         for(auto child: adj[node]){
             if(!visited[child]){
                 q.push(child);
                 visited[child]=1;
             }
         }
     }
     
 }
 
 
int main() {
  // write your code here...
  int n; cin>>n;
  ll ans=0;
  vector<int> arr(n+1);
  
  for(int i=1; i<=n; i++)cin>>arr[i];
  
  vector<int> visited(n+1,0);
  vector<vector<int>> adj(n+1);
  
  for(int i=1; i<=n; i++){
      int u = arr[i];
      adj[u].push_back(i);
      adj[i].push_back(u);
  }
  
  for(int i=1; i<=n; i++){
      if(!visited[i]){
         bfs(visited,adj,arr,i);
         ans++;
      }
  }
  
//   for(int i=0; i<n; i++){
//       if(!visited[i]){
//           ans+=arr[i];
//       }
//   }
  
  cout<<ans<<"\n";
  
  
  
  
  return 0;
}
