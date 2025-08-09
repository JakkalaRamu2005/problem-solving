#include <bits/stdc++.h>
using namespace std;

int tribonocci(int n){
    if(n==0)
    return 0;
if(n==1 or n==2)
return 1;
return tribonocci(n-1)+tribonocci(n-2)+tribonocci(n-3);

}

int main(){

    int n=4;
    // cin >> n;
    cout << tribonocci(n);

}