#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int n = 5;
    int arr[n] = {
        4,
        2,
        9,
        7,
        5
    };

    sort(arr, arr + n);
    int lar = arr[n - 1];



    for (int i = n - 2; i >= 0; i--) {

        if (arr[i] != lar) {
            cout << arr[i];
            break;
        }
        // cout << arr[i] << endl;
    }

}