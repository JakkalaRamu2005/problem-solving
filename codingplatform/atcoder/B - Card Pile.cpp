#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int n; cin>>n;
//   int c=100;
 stack<int> st;
  for(int i=0; i<n; i++){
      int x; cin>>x;
      if(x==1){
          int y; cin>>y;
          st.push(y);
      }else{
          if(st.empty()){
              cout << 0 << endl;
          }else{
              cout << st.top() << endl;
              st.pop();
          }
      }
  }
  
  return 0;
}
