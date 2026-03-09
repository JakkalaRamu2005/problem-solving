#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    int n; cin>>n;
    // int n=3000;
    vector<bool> prime(n+1, true);
    prime[0]=false;
    prime[1]=false;
    
    int c=0;
    for(int i=2; i*i<=n; i++){
        
        for(int j=i*i; j<=n; j+=i){
            if(prime[j]){
                prime[j]=false;
            }
        }
        
    }
    
   
   int total = 0;
   
   for(int i=6; i<=n; i++){
       int c=0;
       for(int j=1; j<=n; j++){
           if(prime[j]){
               if(i%j==0){
                   c++;
               }
               if(c==2){
                   total++;
                   break;
               } 
           }
       }
       
       
       
       
   }
   
  cout << total << endl;
   
    
    
   
}
