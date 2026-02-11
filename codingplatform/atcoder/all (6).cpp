#include <bits/stdc++.h>
using namespace std;

int main(){
  
    int n,m,k; cin>>n>>m>>k;
    // vector<int>(n,0)
    unordered_map<int,int> mpp;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;

        if(mpp[a]==n){
            nums.push_back(a);
        }else{
            mpp[a]++;
        }
        // cout << a<< b << endl;
        
    }
    
    for(auto i: nums){
        cout << i << " ";
    }
  
  return 0;
}