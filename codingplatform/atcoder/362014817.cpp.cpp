#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b && a == c && a == d) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }



    return 0;
}