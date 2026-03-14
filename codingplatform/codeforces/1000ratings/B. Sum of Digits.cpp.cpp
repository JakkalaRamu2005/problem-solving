#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << 0 << endl;
    } else {
        long long num = 0;

        long long count = 1;

        for (char ch: s) {
            num += ch - '0';
        }

        while (to_string(num).size() > 1) {
            count++;
            int sum = 0;
            while (num > 0) {
                int last = num % 10;
                sum += last;
                num = num / 10;
            }
            if (sum > 9) {
                num = sum;
            } 
        }

        cout << count << endl;

    }


return 0;

}