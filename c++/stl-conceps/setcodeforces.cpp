#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int q; cin>>q;
  set<int> s;
  while(q--){
      string query; cin>>query;
      if(query=="insert"){
          int x; cin>>x;
          s.insert(x);
      }else if(query=="find"){
          int x; cin>>x;
          if(s.find(x)!=s.end()){
              cout<<"found\n";
          }else{
              cout<<"not found\n";
          }
      }else if(query=="lower_bound"){
           int x; cin>>x;
           auto it = s.lower_bound(x);
            if(it==s.end()){
              cout<<-1<<"\n";
          }else{
               cout<<*it<<"\n";
           }
      }else if(query=="upper_bound"){
          int x; cin>>x;
          auto it = s.upper_bound(x);
           if(it==s.end()){
              cout<<-1<<"\n";
          }else{
               cout<<*it<<"\n";
           }
      }
  }


    

return 0;
}
