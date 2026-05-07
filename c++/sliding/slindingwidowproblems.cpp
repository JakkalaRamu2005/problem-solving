#include<bits/stdc++.h>
using namespace std;
 // using the dynamic sliding which I learn't to solve this problem 
int main() {
  // write your code here...
  
  int n,t; cin>>n>>t;
  vector<int> arr(n);
  for(int i=0; i<n; i++)cin>>arr[i];
  
  int ans = INT_MIN;
  long long sum=0;
  int start=0;
  for(int i=0; i<n; i++){
      sum+=arr[i];
      while(sum>t){
          sum-=arr[start];
          start++;
      }
      ans=max(ans,i-start+1);
      
  }
  cout<<ans<<"\n";
  

  return 0;
}
