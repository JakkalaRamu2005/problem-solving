#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

int n;
cin >> n;

for(int i=1; i<=n; i++){
    
    if(i==1){
        //space 
        
        for(int j=1; j<=n-1; j++){
            cout << "  ";
        }
        cout << "*" << endl;
    }else if(i<=n-1){
        //space 
        for(int k=1; k<=n-i; k++){
            cout << "  ";
        }
        cout << "* ";
        //hollow_space
        int h=n-(2+n-i);
        // cout << h << endl;
        for(int l=1; l<=h; l++){
            cout << "  ";
        }
        cout << "*" << endl;
        
    }else{
        for(int i=1; i<=n; i++){
            cout << "*"<<" ";
        }
    }
    
}


}
