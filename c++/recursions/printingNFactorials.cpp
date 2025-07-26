#include <bits/stdc++.h>
using namespace std;

int calculation(int i){
    if(i==1){
        return 1;
    }else{
        return i*calculation(i-1);
    }
}

void printNFactorial(int n){
    for(int i=1; i<=n; i++){
        cout << calculation(i) << endl;
    }
}



int main(){
    int n=4;
    printNFactorial(n);
}