#include <bits/stdc++.h>
using namespace std;
int getFibonocci(int x){
    if (x==1){
        return 1;
    }
    if(x==0){
        return 0;
    }
    return getFibonocci(x-1)+getFibonocci(x-2);
}
vector<int> getTransformedArray(vector<int>& arr, int n){
    
  for(int i=0; i<n; i++){
    
    arr[i]=getFibonocci(arr[i]);
  }

    
}


int main(){
    int n=4;
    vector<int> arr = {5,8, 13, 2};
    getTransformedArray(arr,n);
    for(auto x: arr){
        cout << x <<" ";
    }
}