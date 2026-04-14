#include<bits/stdc++.h>
using namespace std;
 // as a part of learning the recursion, I am solving the problems using the cursion, print digits, backtracking.
 void printDigits(int n){
     if(n==0){
         return;
     }
     printDigits(n/10);
     cout<<n%10 <<" ";
 }
 
int main() {
  // write your code here...
  
  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      if(n==0){
          cout<<n<<" ";
      }
      printDigits(n);
      cout<<endl;
  }
  
  
  
  
  
  
  return 0;
}
