#include <bits/stdc++.h>

using namespace std;



int main() {


    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int,int> mpp2;
        for (int i = 0; i < n; i++) {
            map<int,int> mpp;
            int n1;
            cin >> n1;
            for (int i = 2; i * i <= n1; i++) {
                while (n1 % i == 0) {
                    mpp[i]++;
                    n1 = n1 / i;
                }

            }
            if (n1 > 1) {
                mpp[n1]++;
            }
            
        
        for(auto pair: mpp){
            mpp2[pair.first]++;
        }
        
     }
     
        int maxi=0;
        for(auto pa: mpp2){
            maxi = max(maxi,pa.second);
        }
        cout << n-maxi << endl;
    
    }




    return 0;

}
