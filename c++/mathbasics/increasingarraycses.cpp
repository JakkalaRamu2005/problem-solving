#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  // write your code here...
  int n; cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n; i++)cin>>arr[i];
  ll ans=0;
  for(int i=0; i<n-1; i++){
      if(arr[i+1]<arr[i]){
          ans+=arr[i]-arr[i+1];
          arr[i+1]=arr[i];
      }
  }
  
  cout<<ans<<"\n";
  
  
  return 0;
}
