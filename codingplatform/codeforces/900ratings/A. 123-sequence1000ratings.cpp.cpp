#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	vector<int> arr(n);
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    int one = count(arr.begin(),arr.end(),1);
    int two = count(arr.begin(),arr.end(),2);
    int three = count(arr.begin(),arr.end(),3);
    
    
    int maxi = max({one,two,three});
    
    cout << n-maxi << endl;

return 0;

}


