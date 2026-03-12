#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int b,k; cin>>b>>k;
	
	vector<int> arr(k);
	int n = arr.size();
	for(int i=0; i<n; i++) cin>>arr[i];
	
    int sum=0;
    if(b%2==0){
        for(int i=0; i<n-1; i++){
            sum+=arr[i]*2;
        }
        sum+=arr[n-1];
    }else{
        for(int i=0; i<n-1; i++){
            sum+=arr[i]*1;
        }
        sum+=arr[n-1];
    }
	
	
	if(sum%2==0){
	    cout << "even";
	}else{
	    cout << "odd";
	}
	
	
	
	
	
	
	return 0;

}
