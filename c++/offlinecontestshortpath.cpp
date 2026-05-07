#include<bits/stdc++.h>
using namespace std;

#define ll long long 
const ll maxx = 1e18;
int main() {
  // write your code here...
  ll n,m; cin>>n>>m;
  vector<vector<pair<ll,ll>>> adj(n+1);
  vector<ll> dist(n+1, maxx);
  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
  
  for(ll i=0; i<m; i++){
      ll u,v,w; cin>>u>>v>>w;
      adj[u].push_back({v,w});
      adj[v].push_back({u,w});
  }
  vector<ll> visited(n+1);
  
  
  pq.push({0,1});
  dist[1]=0;
  visited[1]=1;
  while(!pq.empty()){
      ll dis = pq.top().first;
      ll node = pq.top().second;
      pq.pop();
      
      for(auto it: adj[node]){
          
          ll edgeWeight = it.second;
          ll adjNode = it.first;
        //   cout<<edgeWeight<<adjNode<<endl;
            if(dis+edgeWeight>dist[adjNode]) continue;
             if(dis+edgeWeight<dist[adjNode]){
                  visited[adjNode]=1;
                  dist[adjNode]=dis+edgeWeight;
                  pq.push({dist[adjNode],adjNode});
             }
      }
  }
  
  for(ll i=1; i<=n; i++){
      if(dist[i]==maxx&&!visited[i]){
          cout<<-1<<" ";
      }else{
         cout<<dist[i]<<" ";
      }
      
  }
  return 0;
}
