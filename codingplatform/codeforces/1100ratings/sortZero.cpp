#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define ll long long 
#define vll vector<long long> 
int main() {
  // write your code here...
  int t; cin>>t;
  while(t--){
      int n; cin>>n;
      vi arr(n);
      for(int i=0; i<n; i++)cin>>arr[i];
      unordered_map<int,int> freq;
      int stopIndex=-1;
      for(int i=1; i<n; i++){
          if(arr[i]>=arr[i-1]){
              continue;
          }else{
              stopIndex=i;
          }
      }
    
    if(stopIndex==-1){
        cout<<0<<"\n";
    }else{
        int otherRepeated=-1;
        stopIndex = stopIndex-1;
        for(int i=0; i<n; i++){
            if(i<stopIndex){
                freq[arr[i]]++;
            }else{
                if(freq[arr[i]]!=0){
                    otherRepeated=i;
                }
            }
        }
        
        if(otherRepeated==-1){
            cout<<freq.size()<<"\n";
        }else{
            for(int i=stopIndex; i<=otherRepeated; i++){
                freq[arr[i]]++;
            }
            cout<<freq.size()<<"\n";
        }
        
    }
  }
  
  return 0;
}