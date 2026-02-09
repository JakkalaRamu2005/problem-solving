#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    bool a = true;
    while(a){
        
        int sum=0;
        while(n!=0){
            int last = n%10;
            sum+=last*last;
            n = n/10;
        }
        if(sum>=0 and sum <=9){
            if(sum==1){
                cout << "Yes" << endl;
                a = false;
                break;
            }else{
                cout << "No" << endl;
                break;
            }
        }else{
            n = sum;
            a = true;
        }
        
    }
    
 
    
}