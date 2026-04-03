#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> s;
           bool found=true;
        for (int i = 1; i <= n; i++) {
         
            int ai = (l/i)*i;
            for(int j=0; j>=0; j++){
                ai+=i*j;
                if(ai%i==0&&ai>=l&&ai<=r){
                    s.push_back(ai);
                    break;
                }
                if(ai>r){
                    found=false;
                    break;
                }
            }
            
            if(!found)break;
        }


        if(found){
            cout<<"YES\n";
            for(int x: s)cout<<x<<" ";
            cout<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }


    }



    return 0;

}
