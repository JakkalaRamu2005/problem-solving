#include<bits/stdc++.h>
using namespace std;
 #define ll long long 


void solve(){
    int n;cin >> n;
    int sum; cin>>sum;
    vector<int> arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    
    int start=0; int s=0; int ans=INT_MIN;
    for(int i=0; i<n; i++){
        s+=arr[i];
        while(s>sum){
            s-=arr[start];
            start++;
        }
        if(s==sum){
          ans = max(ans,i-start+1);
        }
        
    }
    if(ans==INT_MIN)cout<<-1<<"\n";
    else cout<<n-ans<<"\n";
    
}


int main() {
  // write your code here...
  int t; cin>>t;
  while(t--){
      solve();
  }
 
  

  return 0;
}
