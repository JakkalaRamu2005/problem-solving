#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {

        // space 
        for (int space = 1; space <= n - i; space++) {
            cout << "  ";
        }
        if (i == 0) {
            for (int val = 0; val <= i; val++) {
                cout << val;

            }
        } else {
            for (int val = 0; val <= i; val++) {
                cout << val << " ";

            }
        }


        if (i >= 1) {
            for (int va = i - 1; va >= 0; va--) {

                if (va == 0) {
                    cout << va;
                } else {
                    cout << va << " ";
                }
                if (va == 0) break;
            }
        }


        cout << endl;



    }

    for (int i = 1; i <= n; i++) {

        // space 
        for (int spa = 1; spa <= i; spa++) {
            cout << "  ";
        }
        // vals 

        if (i == n) {
            for (int val = 0; val <= n - i; val++) {
                cout << val;

            }

            int va = (n - i) - 1;

            for (int k = va; k >= 0; k--) {
                if (k == 0) cout << k;
                else cout << k << " ";

                if (k == 0)
                    break;
            }


            cout << endl;
        } else {
            for (int val = 0; val <= n - i; val++) {
                cout << val << " ";

            }

            int va = (n - i) - 1;

            for (int k = va; k >= 0; k--) {
                if (k == 0) cout << k;
                else cout << k << " ";

                if (k == 0)
                    break;
            }


            cout << endl;
        }

        // cout << n-i << endl;

    }

}