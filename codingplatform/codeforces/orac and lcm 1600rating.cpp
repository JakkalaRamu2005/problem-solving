#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    unordered_map < int, vector < int >> mpp;
    //   for(int i=0; i<n; i++){

    //   }
    for (int j = 0; j < n; j++) {
        int num;
        cin >> num;
        // cout << num << endl;
        map < int, int > freq;
        for (int i = 2; i * i <= num; i++) {
            int c = 0;
            while (num % i == 0) {
                num = num / i;
                freq[i]++;
            }
        }
        if (num > 0) {
            freq[num]++;
        }

        for (auto pa: freq) {
            mpp[pa.first].push_back(pa.second);
        }
    }
    

    long long total = 1;
    for (auto pair: mpp) {
        sort(pair.second.begin(), pair.second.end());
        if (pair.second.size() == n - 1) {
            long long sum = 1;
            for (int k = 1; k <= pair.second[0]; k++) {
                sum *= pair.first;
            }
            total *= sum;

        } else if (pair.second.size() == n) {
            long long sum = 1;
            for (int k = 1; k <= pair.second[1]; k++) {
                sum *= pair.first;
            }
            total *= sum;
        }
    }


    cout << total << endl;
    return 0;

}
