#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int ran = 3;
  vector<vector<int>> nums;
  while(ran--){
      int a; cin>>a;
      vector<int> temp;
      while(a--){
          int x; cin>>x;
          temp.push_back(x);
      }
      nums.push_back(temp);
  }
  
     set<int> s;
             for(int i=0; i<nums[0].size(); i++){
                 for(int j=0; j<nums[1].size(); j++){
                     int y = nums[0][i]+nums[1][j];
                     s.insert(y);
                 }
             }
  
  
  
     int b; cin>>b;
     while(b--){
         int x; cin>>x;
         bool condi = true;
         
             
           for(int k: nums[2]){
               int c = x-k;
               if(s.find(c)!=s.end()){
                   cout << "Yes" << endl;
                   condi = false;
                   break;
               }
           }
           
           if(condi){
               cout << "No" << endl;
           }
         
         }
        
     
}
    

   
