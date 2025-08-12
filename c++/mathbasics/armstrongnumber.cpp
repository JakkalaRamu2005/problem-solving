#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=9474;
    int n2=n;
    int temp = n;
    int size=0;
    while(n!=0){
        n/=10;
        size+=1;
    }

    int sum=0;
    while(temp!=0){
        int last_digit = temp%10;
        temp/=10;
        int innerval =1;
        for(int i=1; i<=size; i++){
            innerval*=last_digit;
        }
        sum+=innerval;

    }

    if(n2==sum){
        cout << "Armstrong number";
    }else{
        cout << "not an Armstrong number";
    }
   
}