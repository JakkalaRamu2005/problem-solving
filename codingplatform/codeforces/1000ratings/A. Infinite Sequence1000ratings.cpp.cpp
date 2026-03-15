#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long s=0;
    long long n; cin>>n;
    long long range=0;
    for(int i=1; i>=0; i++){
        s+=i;
        if(s>=n){
            range=i;
            break;
        }
    }

s-=range;
cout << n-s;

return 0;
}
