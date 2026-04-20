#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  deque<int> dq;
  int n; cin>>n; 
  while(n--){
      string query; cin>>query;
      if(query=="push_back"){
          int x; cin>>x;
          dq.push_back(x);
      }else if(query=="push_front"){
          int x; cin>>x;
          dq.push_front(x);
      }else if(query=="front"){
          cout<<dq.front()<<"\n";
      }else if(query=="back"){
          cout<<dq.back()<<"\n";
      }else if(query=="pop_front"){
          dq.pop_front();
      }else if(query=="pop_back"){
          dq.pop_back();
      }else if(query=="print"){
          int x; cin>>x;
          cout<<dq[x-1]<<"\n";
      }
  }
  return 0;
}
