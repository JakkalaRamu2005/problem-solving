#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> arr={1,2,3,4,5};
	int lastEl = arr[arr.size()-1];
	
// 	cout << lastEl << endl;
    int n = arr.size();
    
    for(int i=n-1; i>=0; i--){
        arr[i]=arr[i-1];
    }
    
   arr[0]=lastEl;
   
   for(int j: arr){
       cout << j << " ";
   }

}
