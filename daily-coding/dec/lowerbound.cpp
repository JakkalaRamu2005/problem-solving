#include <bits/stdc++.h>
using namespace std;




// how to solve this question using the binary search

int find_lower_bound(int n, int target, vector<int> arr){
    
for(int i=0; i<n; i++){
    if(arr[i]>=target){
        return i;
    }
}
    
    
return n;    
    
}








int main() {
	// your code goes here


// I writing the code implement the below things


//upper bound and lower bound

int n, target;
cin >> n >> target;


// cout << n << " " << target << endl;



vector<int> arr;



for(int i=0; i<n; i++){
    
    int x;
    cin >> x;
    arr.push_back(x);
    
}

int index = find_lower_bound(n, target, arr);
cout << index << endl;




}
