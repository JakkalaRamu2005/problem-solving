#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here


        vector<int> arr={1,-1,3,2,-7,-5,11,6};
        int n = arr.size();
        vector<int> nonzero;
        vector<int> negative;
        
        for(int i=0; i<n; i++){
            
            if(arr[i]>0) nonzero.push_back(arr[i]);
            else negative.push_back(arr[i]);
            
        }
        
       
       for(auto x: nonzero){
           cout << x << " ";
       }
       
       cout << endl;
       for(auto i: negative){
           nonzero.push_back(i);
       }
}
