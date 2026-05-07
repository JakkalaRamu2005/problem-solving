#include<bits/stdc++.h>
using namespace std;
#define vi vector<ll> 
#define vll vector<long long> 
#define ll long long 
 
int main() {
  // write your code here...
  ll n,q; cin>>n>>q;
  multimap<ll,ll> mpp;
  for(ll i=1; i<=n; i++){
      ll x; cin>>x;
      mpp.insert({x,i});
  }
  
  while(q--){
      ll k; cin>>k;
      map<ll,ll> index;
      for(ll i=0; i<k; i++){
          ll ind; cin>>ind;
          index[ind]++;
      }
      for(auto pair: mpp){
          if(index.find(pair.second)==index.end()){
              cout<<pair.first<<"\n";
              break;
          }
      }
  }
  
  

    
 
  
  return 0;
}
