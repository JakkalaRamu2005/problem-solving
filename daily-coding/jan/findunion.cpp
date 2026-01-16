class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        a.insert(a.end(),b.begin(),b.end());
        // code here
        map<int,int> count;

for(auto i: a){
    count[i]++;
}

vector<int> result;
for(auto key: count){
    result.push_back(key.first);
}
return result;
    }
};


#include<bits/stdc++.h>
using namespace std;
 
 
 vector<int> union_arrays(vector<int> a, vector<int> b){
     unordered_set<int> result;
     vector<int> uni;
     for(auto i: a){
         result.insert(i);
     }
     for(auto j: b){
         result.insert(j);
     }
     for(auto el: result){
         uni.push_back(el);
     }
     return uni;
 }

int main() {
  // write your code here...
//   [1, 2, 3, 2, 1], b[] = [3, 2, 2, 3, 3, 2]
    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {3,2,2,3,3,2};
    
    vector<int> ans = union_arrays(a,b);
    for(auto x: ans){
        cout << x << " ";
    }
  return 0;
}
