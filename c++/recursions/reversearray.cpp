#include <bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[], int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverse(i+1, arr, n);
}


int main(){
    int n = 4;
    int arr[n]={3,9,27,81};
    
    reverse(0,arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}