#include <bits/stdc++.h>
using namespace std;


/* optimizedsolution
int doubleFactorial(int n) {
    if (n == 1 || n == 2) return n;
    return n * doubleFactorial(n - 2);
} */


int evenFactorial(int sum, int i, int n){
    if(i==n+1){
        return sum;
    }
    if(i%2==0){
        sum*=i;
    }
    evenFactorial(sum,i+1, n);
}

int oddFactorial(int sum, int i, int n){
    if(i==n+1){
        return sum;
    }
    if(i%2==1){
        sum*=i;
    }
    oddFactorial(sum,i+1, n);
}



int print1ton(int n){
   if(n%2==0){
    cout << evenFactorial(1,1,n);
   }else{
    cout <<  oddFactorial(1,1,n);
   }

}
int main(){
    int n=5;
    print1ton(n);
}