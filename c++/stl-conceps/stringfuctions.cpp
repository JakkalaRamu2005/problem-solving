#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  
  int size, queries; cin>>size>>queries;
  string s; cin>>s;
  while(queries--){
      string query; cin>>query;
      if(query=="substr"){
          int l, r; cin>>l>>r;
           int start=min(l,r);
           int end = max(l,r);
          cout<<s.substr(start-1,(end - start) + 1)<<"\n";
      }else if(query=="sort"){
            int l, r; cin>>l>>r;
           int start=min(l,r);
           int end = max(l,r);
          sort(s.begin()+start-1, s.begin()+end);
      }else if(query=="back"){
          cout<<s.back()<<"\n";
      }else if(query=="front"){
          cout<<s.front()<<"\n";
      }else if(query=="push_back"){
          char add; cin>>add;
          s.push_back(add);
      }else if(query=="print"){
          int index; cin>>index;
          index--;
          cout<<s[index]<<"\n";
      }else if(query=="pop_back"){
          if(!s.empty()){
               s.pop_back();
          }
         
      }else if(query=="reverse"){
          int l, r; cin>>l>>r;
           int start=min(l,r);
           int end = max(l,r);
          reverse(s.begin()+start-1, s.begin()+end);
      }
  }
  return 0;
}
