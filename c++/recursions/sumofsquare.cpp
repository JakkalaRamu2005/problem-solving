#include <bits/stdc++.h>
using namespace std;



 int sumsquare(int sum, int n){
        if(n==0){
            return sum;
        }
        sum+=n*n;
        sumsquare(sum, n-1);
        
    }
  
    int recursiveSumOfSquares(int n) {
       cout <<  sumsquare(0,n);
     
    }

int main(){
    int n = 2;
    recursiveSumOfSquares(n);

}