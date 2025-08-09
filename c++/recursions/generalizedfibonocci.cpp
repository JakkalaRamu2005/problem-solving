#include <bits/stdc++.h>
using namespace std;

vector<int> generateGeneralizedFibonacci(int k, vector<int>& start, int n) {
        // Code Here
        
        
        // if(k==n){
        //     return;
        // }
        for(int i=0; i<k; i++){
            int num=0;
            for(int j=0; j<i+k; j++){
                int num+=start[i];
            }
            cout << num;
        }
        // generateGeneralizedFibonacci(k+1,vector<int>& start,n);
         
    }

int main(){
    int k=3;
    int n=6;
    vector<int> arr={0,1,2};
    generateGeneralizedFibonacci(k,arr,n);
}