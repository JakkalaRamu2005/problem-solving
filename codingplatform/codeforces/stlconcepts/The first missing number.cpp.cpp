#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m; cin >> n >> m;
	
// 	cout << n << m << endl;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    // sort(arr.begin(),arr.end());
    // vector<int> copy;
    
    sort(arr,arr+n);
    // cout << arr[n-1] << endl;
    
    int k=0;
    
    for(int j=arr[0]; j<arr[n-1]; j++){
        // cout << arr[k] << " " << j << endl;
        if(arr[k]!=j){
            cout << j << endl;
            break;
        }
        
        k++;
    }

}
