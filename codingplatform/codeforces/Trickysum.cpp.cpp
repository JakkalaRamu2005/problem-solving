#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int n; cin>>n;
    while(n--){
        long long num; cin>>num;
        long long sum=0;
        long long total = num*(num+1)/2;
            
      for(long long i=1; i<=num; i*=2){
          sum+=i;
      }
      long long plus = total - sum;
      cout << -sum+plus << endl;
    //   cout << sum + plus << endl;
    
    }
  

    
    return 0;
}
// 499999998352516354