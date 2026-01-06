#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// I have to understand the sorting algorithms like the merge sort, selection sort and bubble sort quick sort etc.
	// and I havet  to start coding in the linkedlist.
	vector<int> arr = {3,4,5,6,7,8,1,2,3};
	
	int n = arr.size();
	
	for(int i=0; i<n; i++){
	    
	    
	    
	    for(int j=0; j<n-i-1; j++){
	        if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
	    }
	}
	
	
	for(auto i: arr){
	    cout << i << " ";
	}
	
	
	

}
