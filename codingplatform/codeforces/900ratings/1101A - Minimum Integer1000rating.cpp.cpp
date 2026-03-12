#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
int n; cin>>n;
while(n--){
    int l,r,d; cin>>l>>r>>d;
    
    if(d<l){
        
        cout << d << endl;
        
    }else{
        if(r<d){
            cout << d << endl;
        }else{
            int x = (r/d)+1;
            cout << d*x << endl;
        }
        
    }
}

return 0;

}


