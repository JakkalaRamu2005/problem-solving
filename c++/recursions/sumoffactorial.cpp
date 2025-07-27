#include <bits/stdc++.h>
using namespace std;

int factorial(int i){
    if(i==1){
        return 1;
    }
    return i*factorial(i-1);
}

void sumOfFactorial(int n){
    int sum=0;
    while(n!=0){
        int last_digit = n%10;
        sum+=factorial(last_digit);
        n/=10;
    }
    cout << sum << endl;
    

}

int main(){

    int n = 95;
    sumOfFactorial(n);
}