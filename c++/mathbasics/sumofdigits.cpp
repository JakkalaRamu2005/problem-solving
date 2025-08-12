#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=1112134;
    int sum=0;

    while(n!=0){
        int last_digit = n%10;
        n/=10;
        sum+=last_digit;
    }
    cout << sum;
    // their going to minor change in this for sum of the digits
}