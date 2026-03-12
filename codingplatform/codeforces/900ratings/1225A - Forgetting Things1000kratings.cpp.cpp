#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int x,y; cin>>x>>y;
	
	if(x==y){
	    cout << x*10 << " " << (x*10)+1;
	}else if(x==9 && y == 1){
	    cout << x << " " << x+1 << endl;
	}else if(y == x+1){
	    cout << (x*10)+9 << " " << (x*10)+10;
	}else{
	    cout << -1 << endl;
	}
	
	
	
	
	return 0;

}
