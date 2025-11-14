#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y; cin >> x >> y;
	vector<int> arr(x);
	
    for (int i=0; i<x; i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    while(x--){
        string type;
        int x;
        cin >> type >> x;
        
        if(type=="binary_search"){
            if(binary_search(arr.begin(),arr.end(),x)){
                cout << "found\n";
            }else{
                cout << "not found\n";
            }
        }
        else if(type=="lower_bound"){
            auto it = lower_bound(arr.begin(), arr.end(),x);
            if(it == arr.end()){
                cout << -1 <<"\n";
            }else{
                cout << *it << "\n";
            }
        }
        else if(type=="upper_bound"){
            auto it = upper_bound(arr.begin(), arr.end(),x);
                if(it == arr.end()){
                    cout << -1 << "\n";
                }else{
                    cout << *it << "\n";
                }
            
        }
        
    }
    
    

}
