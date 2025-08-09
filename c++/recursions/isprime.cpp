#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=5;
    int sum=0;

    for(int i=1; i<=n; i++){
        int factor=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                factor+=1;
            }
            
        }
        if(factor==2){
            cout << i << endl;
        }
        

    }
    
   
}