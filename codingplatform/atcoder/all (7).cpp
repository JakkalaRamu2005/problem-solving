#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    bool condi = true;

    for (int i = l; i < r; i++) {
        if (s[i] != 'o') {
            cout << "No" << endl;
            condi = false;
        }
    }

    if (condi) {
        cout << "Yes" << endl;
    }

    return 0;
}