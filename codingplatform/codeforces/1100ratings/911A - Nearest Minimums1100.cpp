#include <bits/stdc++.h>

using namespace std;

int main() {
   int t; cin>>t;
   vector<int> arr(t);
   for(int i=0; i<t; i++){
       cin>>arr[i];
   }

  

  int minEl = *min_element(arr.begin(),arr.end());
  
  vector<int> arr2;
  for(int i = 0; i<t; i++){
      if(arr[i]==minEl){
          arr2.push_back(i);
      }
  }
  

  
  sort(arr2.begin(),arr2.end());
  
  set<int> s;
  for(int i=1; i<arr2.size(); i++){
    
      s.insert(arr2[i]-arr2[i-1]);
  }
  
  
for(int x: s){
    cout << x << endl;
    break;
}


    return 0;

}
