#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		/*
We have a list of numbers.
Some numbers repeat more times than others.
First, we count how many times each number appears.
Then we find which number appears the most times.
Now, we add all the counts that are equal to this maximum count.
Finally, we return that total.
*/
	
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
