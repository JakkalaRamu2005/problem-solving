#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m; cin >> n >> m;
	

    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int j=0; j<m; j++){
        int a,b,val; cin >> a >> b >> val;
        
        for(int k=a-1; k<b; k++){
            arr[k]+=val;
        }
    }
    
    for(int num:arr){
        cout << num << " ";
    }

}
