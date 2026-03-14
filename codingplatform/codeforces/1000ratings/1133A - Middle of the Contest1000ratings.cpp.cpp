#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int h1,h2,m1,m2;
	
	char c1,c2;
	
	cin>>h1>>c1>>m1>>h2>>c2>>m2;
	
	int start = (h1*60)+m1;
	int end = (h2*60)+m2;
	
	int mid = (start+end)/2;
	
	int rh = mid/60;
	int rm = mid-(rh*60);
	
	
	if(rh<=9){
	    cout << 0 << rh << c1;
	    if(rm>=1 && rm<=9){
	        cout << 0 << rm;
	    }else if(rm==0){
	        cout << "00";
	    }else{
	        cout << rm;
	    }
	}else{
	    cout << rh << c1;
	     if(rm>=1 && rm<=9){
	        cout << 0 << rm;
	    }else if(rm==0){
	        cout << "00";
	    }else{
	        cout << rm;
	    }
	}
	
	
	

}
