#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n; cin>>n;
	// ax + by = n;
	// 4x + 7y = n;
	
	int y  = n/7;
	
	while(true){
	    
	    bool t = (n-(7*y))%4==0;
	    if(t){
	        int seven = y;
	        int four = (n-(7*y))/4;
	        string result="";
	        for(int i=0; i<four; i++) cout << 4;
	        for(int i=0; i<seven; i++) cout << 7;
	        break;
	    }else{
	        if(y>0){
	            y--;
	        }else{
	            cout << -1 << endl;
	            break;
	        }
	    }
	    
	    
	    
	}










}


