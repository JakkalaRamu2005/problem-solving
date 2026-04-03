#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string result = "";
        if (s[0] == '9') {
            bool carry = false;
            for (int i = n - 1; i >= 0; i--) {
                char ch = s[i];
                if(((ch - '0')+carry)>1){
                    result += to_string(11 - ((ch - '0')+carry));
                    carry = true;
                }else{
                    result += to_string(1^((ch - '0')+carry));
                    carry = false;
                }
            }
        reverse(result.begin(), result.end());
        } else {
            for (char ch: s) {
                result += to_string(9 - (ch - '0'));
            }
        }


        cout << result << "\n";
    }




    return 0;
}
