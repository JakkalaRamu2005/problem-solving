#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	vector<int> nums={1,2,2,3,1,4};
	map<int,int> freq;
	
	for(auto i: nums){
	    freq[i]++;
	}
	
	vector<int> values;
	
	for(auto el: freq){
	    values.push_back(el.second);
	}
	
	int mx = *max_element(values.begin(), values.end());
	
	int co=0;
	for(auto val: values){
	    if(val==mx){
	        co+=val;
	    }
	}
	
	cout << co << endl;
	

}
