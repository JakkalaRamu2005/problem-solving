#include <bits/stdc++.h>
using namespace std;


void reverseArray(vector<int> &arr, int n){
    vector<int> reversed;
    for(int i=n-1; i>=0; i--){
        reversed.push_back(arr[i]);
    }
   
   for(int i=0; i<n; i++){
       arr[i]=reversed[i];
   }
}

int main() {
	// your code goes here
	
	vector<int> arr={1,2,3,4,5,6};
	int n = arr.size();
	reverseArray(arr,n);
	for(int i=0; i<n; i++){
	    cout << arr[i] << " ";
	}

}
