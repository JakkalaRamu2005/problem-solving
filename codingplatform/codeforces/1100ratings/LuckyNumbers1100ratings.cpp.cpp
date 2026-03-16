#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int n;
    cin >> n;

    // for the i values, is the first loop
    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        long long s = 1;
        for (int j = 1; j <= i; j++) {
            s *= 2;
        }
        sum += s;
    }
    cout << sum;




    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    long long sum = 0;
    long long power = 2;

    for (int i = 1; i <= n; i++) {
        sum += power;
        power *= 2;
    }

    cout << sum;

}