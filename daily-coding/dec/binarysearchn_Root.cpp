#include<bits/stdc++.h>
using namespace std;
 
 
 int power(int mid, int n){
     int sum=1;
     for(int i=1; i<=n; i++){
         sum*=mid;
         
     }
     return sum;
 }
 
 int n_root(int n, int m){
     int low=1;
     int high = m;
     while(low<=high){
         int mid = (low+high)/2;
         int x = power(mid,n);
        //  cout << x << endl;
         if(x==m){
             return mid;
         }else if(x>m){
             high = mid-1;
         }else{
             low = mid+1;
         }
     }
     return -1;
 }
 
 
int main() {
  // write your code here...
  int n,m;
  cin >> n >> m;
  
 cout << n_root(n,m);
  
  return 0;
}
