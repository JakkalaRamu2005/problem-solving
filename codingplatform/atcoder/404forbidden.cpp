#include <bits/stdc++.h>
using namespace std;
#define vi vector<ll> 
#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);



int main() {
    fastio();
    int n,m,q; cin>>n>>m>>q;
    set<pair<int,int>> s;
    unordered_map<int,int> freq;



    for(int i=0; i<q; i++){
        int q1; cin>>q1;

        if(q1==2){
            int x; cin>>x;
            freq[x]=1;
        }else if(q1==1){
            int x,y; cin>>x>>y;
            s.insert({x,y});
        }else if(q1==3){
            int x,y; cin>>x>>y;
            if(s.find({x,y})!=s.end()) cout << "Yes\n";
            else if(freq[x]==1) cout << "Yes\n";
            else cout << "No\n";
            
        }
    }
  

  
    
    return 0;
}
