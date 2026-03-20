#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    string result;
    cin >> result;
    vector <int> arr;
    int c = 0;


    if (n == 0) {
        if (to_string(n) == result) {
            cout << "OK";
        } else {
            cout << "WRONG_ANSWER";
        }
    } else {

        while (n != 0) {
            int last = n % 10;
            if (last != 0) {
                arr.push_back(last);
            } else {
                c++;
            }
            n = n / 10;
        }

        sort(arr.begin(), arr.end());
        int re = arr[0];


        for (int i = 0; i < c; i++) {
            re = re * 10;
        }


        for (int i = 1; i < arr.size(); i++) {
            re = re * 10 + arr[i];
        }

        if (to_string(re) == result) cout << "OK";
        else cout << "WRONG_ANSWER";

    }



}