#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	vector<int> arr ={1,2,3,4,56};
	vector<int> minMax;
	int small=arr[0];
	int big=arr[0];
	
	int n = arr.size();
	for(int i=0; i<n; i++){
	    if(arr[i]>big){
	        big=arr[i];
	    }else{
	        if(arr[i]<small){
	            small = arr[i];
	        }
	    }
	}
	
	minMax.push_back(big);
	minMax.push_back(small);
	
	
// 	cout << big << endl;
	
	

}
