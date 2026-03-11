#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
// 	nums1 = [1,3], nums2 = [2]
	
	vector<int> arr1={1,3};
	vector<int> arr2={2};
	vector<int> arr3;
	
	for(int i: arr1){
	    arr3.push_back(i);
	}
	
	for(int j: arr2){
	    arr3.push_back(j);
	}
	
	sort(arr3.begin(),arr3.end());
	

	
	if(arr3.size()%2==1){
	    int index = arr3.size()/2;
	    double result = arr3[index] / 1.0;
	    cout << result << endl;
	}else{
	    int index = arr3.size()/2;
	    int sum = arr3[index]+arr3[index-1];
	    double result = sum / 2.0;
	    cout << result << endl;
	}


}
