#include<bits/stdc++.h>
using namespace std;
 int f(int k, vector<int> &arr, int n){
     unordered_map<int,int> mpp;
     int j=0;
     int cnt=0;
  for(int i=0; i<n; i++){
        mpp[arr[i]]++;
        while(mpp.size()>k){
            mpp[arr[j]]--;
            if(mpp[arr[j]]==0){
                mpp.erase(arr[j]);
            }
            j++;
        }
        
        // cout<<i-j+1<<"\n";
        cnt+=i-j+1;
  }
  return cnt;
 }
int main() {
  // write your code here...
  vector<int> arr={1,2,1,3,4};
  int k=3;
  int n = arr.size();
  
 cout<<f(k,arr,n)-f(k-1,arr,n);
  
  return 0;
}
