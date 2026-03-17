#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n; cin>>n;
	int five=0;
	int zero=0;
	for(int i=0; i<n; i++){
	    int x; cin>>x;
	    if(x==5) five++;
	    else zero++;
	}
	
	
	int s=5*five;
	if(five>=9 && zero>=1){
	    int c = five/9;
	    int fivc = c*9;
	    for(int i=1; i<=fivc; i++){
	        cout << 5;
	    }
	    
	    for(int j=1; j<=zero; j++){
	        cout << 0;
	    }
	    
	}else if(zero>=1&&five<9){
	    cout << 0 << endl;
	}else{
	    cout << -1 << endl;
	}
	
	
	
return 0;

}
