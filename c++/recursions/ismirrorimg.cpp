#include <bits/stdc++.h>
using namespace std;

bool reverse(int i, int arr[], int n){
    if(i>=n/2){
        return true;
    }
    if(arr[i]!=arr[n-i-1]){
        return false;
    }
    return reverse(i+1, arr, n);

}

int main(){

    int n = 6;
    int arr[n] = {1,2,3,3,2,1};
    cout << reverse(0, arr, n);
}