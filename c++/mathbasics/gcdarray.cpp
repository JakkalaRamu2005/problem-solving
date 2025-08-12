#include <bits/stdc++.h>
using namespace std; 

int main(){

    int n=1;
    int arr[n] = {1};
    // write to code to find the gcd greatest common divisor 
    sort(arr, arr+n);
    int count=0;
    int a = arr[0];
    for(auto x: arr){
        if(x%a==0){
            count+=1;
        }
    }
    if(count==n){
        cout << a;
    }else{
        cout<< 1;
    }
    
    

}