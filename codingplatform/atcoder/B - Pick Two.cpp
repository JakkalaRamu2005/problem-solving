#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  string s; cin>>s;
  int c=0;
  for (int i=1; i<=s.size(); i++){
      
      if(s[i-1]=='#'){
          cout << i;
          c++;
          if(c==1){
              cout << ",";
          }
      }
      if(c==2){
          cout << endl;
          c=0;
      }
  }
  
  return 0;
}
