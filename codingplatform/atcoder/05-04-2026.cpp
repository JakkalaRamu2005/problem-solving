#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);



int main() {
    fastio();
       int n; cin>>n;
       unordered_map<int,int> mpp;
       map<int,int> mpp2;
       priority_queue<int> pq;
       for(int i=1; i<=n; i++){
           int x; cin>>x;
           mpp[x]++;
           mpp2[x]=i;
       }
       
       for(auto pair: mpp){
           if(pair.second==1){
               pq.push(pair.first);
           }
       }
       
      if(pq.empty()){
          cout<<-1<<endl;
      }else{
          cout<<mpp2[pq.top()]<<"\n";
      }
       
       
       
       return 0;
}
