#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int n;
    cin >> n;
    int a = 2020;
    int b = 2021;
   
    while (n--) {
        bool flag = true;
        int year;
        cin >> year;
        int x = year / a;
        while (true) {
            if ((year - (a * x)) % b == 0) {
                cout << "Yes" << endl;
                flag = false;
                break;

            } else {
                if (x > 0) {
                    x--;
                } else {
                    break;
                }
            }


        }

        if (flag) {
            cout << "No" << endl;
        }




    }




    return 0;

}