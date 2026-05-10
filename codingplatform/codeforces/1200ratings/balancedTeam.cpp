#include <bits/stdc++.h>
using namespace std;

// you will be given student skills, what is the maximum that you can select 
// so that the difference b/w the skills of each of student should <=5 

int main() {
	// your code goes here
	// trying with the broute force solution If I get the tle, I will optimal one 
	int n; cin>>n;
	vector<int> arr(n); for(int i=0; i<n; i++)cin>>arr[i];
	
	
	sort(arr.begin(),arr.end());
	int maxCount=0;
	int j=0;
	// this is typical sliding window problem where I got update my maximum every time 
	// if the difference b/w the arr[i]-arr[j]<=5 I will keeing i pointer and updating my ans which is the window size 
	// else I move the j pointer. 
	for(int i=0; i<n; i++){
	    while(arr[i]-arr[j]>5){
	        j++;
	    }
	    maxCount=max(i-j+1,maxCount);
	}
	
	cout<<maxCount<<"\n";

	return 0;

}
