#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  
        vector<int> arr={0,1,2,2};
        int ans=0;
        int n = arr.size();
        unordered_map<int,int> f;
        int j=0;
        for(int i=0; i<n; i++){
             f[arr[i]]++;
             while(f.size()>2){
                 f[arr[j]]--;
                 if(f[arr[j]]==0){
                     f.erase(arr[j]);
                 }
                j++;
             }
            
            if(f.size()<=2){
                ans = max(ans,i-j+1);
            }
        }
        cout<<ans<<"\n";
   
  return 0;
}
