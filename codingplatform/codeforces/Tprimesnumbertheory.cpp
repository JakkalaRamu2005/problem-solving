#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        
        long long n;
        cin >> n;
        long long x = sqrt(n);
        // cout << x << endl;
       int c = 0;
        if (x * x == n) {

            for (long long i = 1; i * i <= x; i++) {
                if (x % i == 0) {
                    if (i != x / i) {
                        c += 2;
                    } else {
                        c++;
                    }
                    
                    if(c>2) break;
                }

            }
        }
        if (c == 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }


    }



    return 0;

}

// NO
// YES
// NO
// NO
// NO
// NO
// YES
// NO
// NO
// NO
