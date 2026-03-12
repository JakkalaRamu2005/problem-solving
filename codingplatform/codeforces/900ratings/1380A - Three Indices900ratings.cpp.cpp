#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	bool flag = true;
	while(t--){
	    int n; cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n; i++) cin>>arr[i];
	    bool flag = true;
	    for(int i=1; i<n; i++){
	        if(i+1<n && arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
	            cout << "YES" << endl;
	            cout << i << " " << i+1 << " " << i+2 << endl;
	            flag = false;
	            break;
	        }
	    }
	    
	    if(flag){
	        cout << "NO" << endl;
	    }
	    
	    
	}
	

	
	
	return 0;

}
