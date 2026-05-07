#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define vll vector<long long> 
#define ll long long 
 
int main() {
  // write your code here...
  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      vll arr(n);
      
      int NegativeEl=0;
      for(ll i=0; i<n; ++i){
          cin>>arr[i];
          if(arr[i]<0){
              NegativeEl++;
              arr[i]=-arr[i];
          }
      }
      ll ans=1;
      if(NegativeEl>=4||NegativeEl==0){
          sort(arr.begin(),arr.end());
          for(int i=n-1; i>=n-5; i--){
              ans*=arr[i];
              cout<<arr[i]<<" ";
          }
          cout<<endl;
          cout<<ans<<"\n";
          
      }
      
       
  }
  
  
 
  
  return 0;
}