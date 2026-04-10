#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int n; cin>>n;
  vector<vector<int>> adj(n+1);
  for(int i=1; i<n; i++){
      int x,y; cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
  }
  
  vector<int> given(n+1);
  map<int,int> pos;
  for(int i=1; i<=n; i++){
      int x; cin>>x;
      given[i]=x;
      pos[given[i]]=i;
      // taking the posive of given vector in the map.
  }
  // start from leve 1 and node 1, I am using the one based indexing 
  vector<int> visited(n+1,0);
  vector<int> parent(n+1,0);
  queue<pair<int,int>> q;
  q.push({1,1});
  visited[1]=1;
  while(!q.empty()){
      int le = q.front().first;
      int node = q.front().second;
      q.pop();
      for(auto child: adj[node]){
          if(!visited[child]){
                visited[child]++;
                parent[child]=node;
                q.push({le+1, child});
          }
      }
  }
  
  int start = n;
  // coming from the back side, and checking the given element parent position in the map
  // are in the correct order or .not
  bool flag = true;
  for(int i=n; i>=1; i--){
      if(start<pos[parent[given[i]]]){
          cout<<"NO\n";
          flag=false;
          break;
      }
      start=min(start,pos[parent[given[i]]]);
  }
  
  if(flag){
     cout<<"YES\n"; 
  }
 
  return 0;
}
