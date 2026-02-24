#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  unordered_map<int,int> mpp;
  for(int i=0; i<7; i++){
      int x; cin>>x;
      mpp[x]++;
  }
  int two=0,three=0;
  set<int> s;
  for(auto i: mpp){
      if(i.second>=3){
          three++;
          s.insert(i.first);
      }
      if(i.second>=2){
          two++;
          s.insert(i.first);
      }
  }
  bool condi = three>=1 && two>=1;
  if(s.size()>=2 && condi){
      cout << "Yes" << endl;
  }else{
      cout << "No" << endl;
  }
  
  
  return 0;
}
