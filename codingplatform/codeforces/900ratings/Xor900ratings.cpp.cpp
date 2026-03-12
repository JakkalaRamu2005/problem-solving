#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

// 325 265 1231232
int t; cin>>t;
while(t--){
    int a,b,n; cin>>a>>b>>n;

int x = n%3;
if(x==2){
    cout << (a^b) << endl;
}else if(x==0){
    cout << a << endl;
}else{
    cout << b << endl;
}
}



// 325 265
    return 0;

}