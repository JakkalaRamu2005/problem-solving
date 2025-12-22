#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// number pyramid.
	
	int n =4;
	for(int i=1; i<=n; i++){
	    
	    for(int j=1; j<=i; j++){
	        cout << i << " ";
	    }
	    cout << endl;
	    
	}
	
	
	// Rotated Number pyramid 

for(int i=1; i<=n; i++){
    int k = i;
    //for space 
    for(int k=1; k<=n-i; k++){
        cout << "  ";
    }
    
    for(int j=1; j<=i; j++){
        
        cout << k << " ";
        
        k++;
        
    }
    cout << endl;
}

}
