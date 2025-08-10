#include <bits/stdc++.h>
using namespace std;


class solution {
    public:
    vector<int> generateGeneralizedFibonacci(int k, vector<int>& start, int n) {
        // Code Here
       
        for(int i=start.size(); i<n; i++){
            int num=0;
            for(int j=0;j<k; j++){
                num+=start[i-k+j];
            }
            start.push_back(num);
        }
        return start;                  
        
         
    }
};

int main(){
    int k=3;
    int n=6;
    vector<int> arr={0,1,2};
    generateGeneralizedFibonacci(k,arr,n);
}