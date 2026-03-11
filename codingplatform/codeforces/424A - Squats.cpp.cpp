#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int n;
    cin >> n;
    string s;
    cin >> s;
    int sm = 0, lar = 0;
    int mid = n / 2;
    // cout << mid << endl;
    for (char ch: s) {
        if (ch == 'x') {
            sm++;
        } else {
            lar++;
        }
    }


    if (sm > mid) {
        int c = abs(mid - sm);
        int co = 0;
        // cout << c << endl;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'x') {
                s[i] = 'X';
                co++;
            }

            if (co == c) {
                break;
            }

        }
        
        cout << co << endl;
        cout << s << endl;
        
    }else if(sm<mid){
        int co=0;
        int c = mid - sm;
        for(int i=0; i<n; i++){
            if(s[i]=='X'){
                s[i]='x';
                co++;
            }
            if(co==c){
                break;
            }
        }
        
        cout << co << endl;
        cout << s << endl;
    }else{
        cout << 0 << endl;
        cout << s << endl;
    }




    return 0;
}