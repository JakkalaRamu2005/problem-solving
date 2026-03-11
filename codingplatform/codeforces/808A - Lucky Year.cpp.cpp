#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
int n; cin>>n;

int di = to_string(n).size();
char first = to_string(n)[0];

int fi = first-'0'+1;
for(int i=1; i<di; i++){
    fi*=10;
}

cout << fi-n << endl;






// cout << (sum-n);

}
