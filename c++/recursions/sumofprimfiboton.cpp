#include <bits/stdc++.h>
using namespace std;
int fibonocci(int i){
    if(i==0){
        return 0;
    }
    if(i==1){
        return 1;
    }
    return fibonocci(i-1)+fibonocci(i-2);
}
int primefibsum(int n){
    int sum=0; 
    if(n<=2){
        return 0;
    }else{
        for(int i=0; i<=n; i++){
           int prime = fibonocci(i);
           
            int factor=0;
            for(int i=1; i<=prime; i++){
                if(prime%i==0){
                    factor+=1;
                }
                
            }
            if(factor==2){
                sum+=prime;
            }
    
        }
        return sum;
       
    }
}

int main(){
    int n=20;
    cout << primefibsum(n);
}