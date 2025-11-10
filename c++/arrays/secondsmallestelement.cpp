#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

// find the second smallest element in the given array


int n = 5;
int arr[n]={4,2,9,7,5};

// for sorting the array use sort function 

sort(arr, arr+n);
int small = arr[0];

for(int i=1; i<n; i++){
    if(arr[i]!=small){
        cout << arr[i];
        break;
    }
}





}