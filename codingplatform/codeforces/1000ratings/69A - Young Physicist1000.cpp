69A - Young Physicist

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	
	
	int n; cin>>n;
	int x1=0, y1=0, z1=0;
	for(int i=0; i<n; i++){
	    int a,b,c; cin>>a>>b>>c;
	    x1+=a;
	    y1+=b;
	    z1+=c;
	}
	
	if(x1==0&&y1==0&&z1==0) cout << "YES";
	else cout << "NO";
	
	return 0;
	

}
