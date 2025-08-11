#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =5;

    int arr[]={30,50,40,20,10};
  // comparaning the two adjacent elements if the arr[j] is greater than the arr[j+1] we are swap them 
  // the first loop run the n-1 times 
  // the second loop runs only the n-1-i, every time for the first iteration the largest element will be sorted set to the
  // end of the arr that's why we are doing the -i here in the second for loop. 

  for(int i=0; i<n-1; i++){


    for(int j=0; j<n-1-i; j++){
        if(arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   
  }

   for(auto x: arr){
        cout << x << " ";
    }
    cout << endl;
}