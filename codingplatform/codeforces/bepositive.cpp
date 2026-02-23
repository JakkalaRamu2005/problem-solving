#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int n; cin>>n;
 
  for(int i=0; i<n; i++){
        int c=0;
       int minus = 0;
      int zero = 0;
      int one = 0;
      int x; cin>>x;
      for(int j=0; j<x; j++){
          int n1; cin>>n1;
          if(n1==0) zero++;
          else if(n1==-1) minus++;
          else one++;
      }
        int k = minus%2;
        c = k*2+zero;
        // cout << zero << one << minus << endl;
        cout << c << endl;
  
  
  }
  
  

  
  
}
