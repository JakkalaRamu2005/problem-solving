#include <bits/stdc++.h>
using namespace std;

// greedy and two pointers problem, who ever the lesstime they will take the next chocolate, typical greey, and two pointers problem this is 

int main() {
	// your code goes here
	
	int n; cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; i++)cin>>arr[i];
	
	int left=0;
	int right=n-1;
	
	int alicetime=0;
	int bobtime=0;
	int alicecount=0;
	int bobcount=0;
	
	while(left<=right){
	    // if they equal time alice always moves first 
	    if(alicetime<=bobtime){
	        alicetime+=arr[left];
	        alicecount++;
	        left++;
	    }else{
	        bobtime+=arr[right];
	        bobcount++;
	        right--;
	    }
	}
	
	cout<<alicecount<<" "<<bobcount<<"\n";
	return 0;

}
