#include <bits/stdc++.h>
using namespace std;

int  main(){

 int n=234928374;

 // question: you are given integer n, and your task is to print the all digits of the given integer

 while(n!=0){
    int last_digit = n%10;
    n /= 10;
    cout << last_digit << endl;
 }


}