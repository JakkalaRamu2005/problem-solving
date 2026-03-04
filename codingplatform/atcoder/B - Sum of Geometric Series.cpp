#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    __int128 sum = 0, power = 1;

    for(int i = 0; i <= m; i++) {
        sum += power;

        if(sum > 1000000000) {
            cout << "inf";
            return 0;
        }

        power *= n;
    }

    cout << (long long)sum;
}
