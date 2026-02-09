#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int num;
    cin >> num;

    vector < string > str;
    for (int i = 0; i < num; i++) {
        string st;
        cin >> st;
        str.push_back(st);
    }

    // cout << str.size() << endl;
   
    
    for(int i=0; i<str.size(); i++){
         int c = 0;
        int d = 0;
        
        // cout << str[j] << " ";
        for (char ch: str[i]) {
        for (char f: s) {
            if (ch == f) {
                c++;
            }
        }
        for (char g: t) {
            if (ch == g) {
                d++;
            }
        }
        
    }
    
    // cout << c << d << endl;

    
     if (str[i].size() == c && str[i].size() == d) {
        cout << "Unknown" << endl;
    } else if (str[i].size() == c) {
        cout << "Takahashi" << endl;
    } else if (str[i].size() == d) {
        cout << "Aoki" << endl;
    }
    
    
    }
   
    
    
    

}