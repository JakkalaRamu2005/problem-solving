#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	

    int ans=0;
    int k,s; cin>>k>>s;
    
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            int z = s-(i+j);
            if(z>=0&&z<=k&&(i+j+z==s)){
                ans++;
            }
        }
    }
    
    cout<<ans<<"\n";
    
	

	
	return 0;

}
