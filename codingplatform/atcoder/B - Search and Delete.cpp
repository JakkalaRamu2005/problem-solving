#include<bits/stdc++.h>
using namespace std;
 
int main() {
  // write your code here...
  int n,m; cin>>n>>m;
  vector<int> a(n);
  vector<int> b(m);
  
  for(int i=0; i<n; i++){
      cin>>a[i];
  }

  for(int i=0; i<m; i++){
      int x; cin>>x;
      int low = 0;
      int high = a.size()-1;
      while(low<=high){
          int mid = (low+high)/2;
          if(a[mid]==x){
            //   cout << mid << endl;
              a.erase(a.begin()+mid);
            //   c++;
              break;
          }else if(x>a[mid]){
              low = mid+1;
          }else{
              high = mid-1;
          }
          

      }
      
  }
  
  for(int k: a){
      cout << k << " ";
  }
  
  
  

   
  return 0;
}
