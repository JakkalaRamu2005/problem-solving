#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    string s;
    cin >> s;
    int total = 0;

    int n = s.size();
    vector < int > nums;
    int co = 0;
    for (int i = 0; i < n; i++) {

        if (s[i] == '0') {
            co++;
        } else {
            if (co >= 1) {
                nums.push_back(co);
                co = 0;
            }
        }

        if (s[i] != '0') {
            total++;
        }

        if (i == n - 1) {
            if (co >= 1) {
                nums.push_back(co);
            }
        }

    }



    for (int i: nums) {
        int x = i / 2;
        int y = i % 2;
        total += x;
        total += y;
    }
    cout << total << endl;

}