#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vi vector<int>
#define vll vector<long long>
int main() {
  // write your code here...
  
  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      vll arr(n);
      vi even,v1;
      vi odd,v2;
      for(ll i=0; i<n; i++){
          cin>>arr[i];
          if(arr[i]&1){
              odd.push_back(arr[i]);
              v2.push_back(arr[i]);
          }else{
              even.push_back(arr[i]);
              v1.push_back(arr[i]);
          }
      }
      
     
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());
     
     if(v1==even&&odd==v2){
         cout<<"YES\n";
     }else{
         cout<<"NO\n";
     }
      
      
  }

  
  
  return 0;
}