#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n; cin>>n;
    
    for(int i=0; i<n; i++){
        int white,dark; cin>>white>>dark;
        int co=0;
        int layer=1;
        while(dark!=0&&white!=0){
            if(dark>=layer){
                dark = dark-layer;
                layer = layer*2;
                co++;
            }
            if(white>=layer){
                    white = white-layer;
                    layer = layer*2;
                    co++;
           }
        }
        
        cout << co << endl;
        
    }
}
