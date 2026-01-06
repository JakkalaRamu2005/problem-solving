#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	vector<int> arr={2,1,5,1,3,2};
	int k =3;
	int x=0;
	
	for(int i=0; i<arr.size(); i++){
	    int start = i;
	    int end = i+k;
	    int y=0;
	    if(i+k<=arr.size()){
	        for(int j=start; j<end; j++){
	            y+=arr[j];
	    }
	    
	    
	   // cout << endl;
	        
	    }
	    
	    if(y>x){
	        x = y;
	    }
	    
	}
	
	cout << x << endl;
	
	
	

}
