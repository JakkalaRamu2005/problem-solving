#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; i++){
	    int x; cin>>x;
	    nums[i]=x;
	}
	int c=0;
	for(int i=1; i<n; i++){
	    // i values or from 1 2 3 4 
	    for(int j=i+1; j<=n; j++){
	       // cout << i << " " << j << " ";
	       //int n1 = nums[i-1];
	       vector<int>val;
	       int s =0;
	       for(int k=i-1; k<j; k++){
	           val.push_back(nums[k]);
	           s+=nums[k];
	       }
	       int divisor = 0;
	       for(auto i: val){
	           if(s%i!=0){
	               divisor++;
	           }
	       }
	       
	       if(val.size()==divisor){
	           c++;
	       }
	       
	    }
	}
	
	cout << c << endl;

}
