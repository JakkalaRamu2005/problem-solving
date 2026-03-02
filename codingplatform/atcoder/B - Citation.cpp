#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> arr(n);
// 	int lar=INT_MIN;
	for(int i=0; i<n; i++){
	    int x; cin>>x;
	   // lar = max(lar,x);
	    arr[i]=x;
	}
	
	int result;
	int x=1;
	while(true){
	    int c=0;
	    for(int j: arr){
	        if(j>=x){
	            c++;
	        }
	    }
	    
	    if(c>=x){
	        result = max(result, x);
	    }
	    if(x<=n){
	        x++;
	    }else{
	        break;
	    }
	}
	
	cout << result << endl;

}
