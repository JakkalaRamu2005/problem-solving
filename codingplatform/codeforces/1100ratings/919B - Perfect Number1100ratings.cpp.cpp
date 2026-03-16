#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
   int k; cin>>k;
   int c=0;
   for(int i=1; i>=0; i++){
       int temp = i;
       int s=0;
       while(temp>0){
           s+=temp%10;
           temp = temp/10;
       }
       
       if(s==10)c++;
       
       if(c==k){
           cout << i << endl;
           break;
       }
       
   }
   


    
return 0;
}