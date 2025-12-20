#include <bits/stdc++.h>
using namespace std;




// how to solve this question using the binary search

int find_lower_bound(int n, int target, vector<int> arr){
    
        int low=0;
        int high = n-1;
        int ans = n;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid]>=target){
                ans = mid;
                high=mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return ans;
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
