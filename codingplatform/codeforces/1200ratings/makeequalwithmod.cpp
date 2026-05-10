#include <bits/stdc++.h>
using namespace std;
// the question, you can an integer greater >=2 // and replace every element in the array with mod of it, is it possible to make array equal 
// if the one is present in the array, and their are no consecutive integers 
// it's possible because we can make all the elemtns to one in this case 
// if one is present consecutive integers are their then no 

// in all other cases it's possible because every time we select the largest integer in the array replace every element with it's mod making all the elemtns in the array to zero 
int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        
        sort(arr.begin(),arr.end());
        
        bool consecutive =false;
        bool onepresent=false;
        if(arr[0]==1)onepresent=true;
        for(int i=1; i<n; i++){
            if(arr[i]-arr[i-1]==1)consecutive=true;
            if(arr[i]==1)onepresent=true;
        }
        
        if(onepresent&&consecutive){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    

	return 0;

}
