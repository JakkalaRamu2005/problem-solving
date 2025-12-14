#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int value=1;
    
    int n;
    cin >> n;
    
    
    for(int i=1; i<=n; i++){
        
        //spaces 
        
        for(int k=1; k<=n-i; k++){
            cout << "  ";
        }
        
        for(int j=0; j<i; j++){
            cout << value << " ";
            value++;
        }
        
        cout << endl;
        
    }
    

}
