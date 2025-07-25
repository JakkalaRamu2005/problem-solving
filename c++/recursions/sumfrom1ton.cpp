#include <bits/stdc++.h>
using namespace std;

// first approach
/* void sumof(int i, int sum, int n){
    if(i==n+1){
        cout << sum << endl;
        return;
    }
    sumof(i+1,sum+i,n);
}

int main(){

    int n=10;
    int sum=0;
    sumof(1,sum,n);
} */

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return sum(n - 1) + n;
}

int main()
{
    int n = 6;
    cout << sum(n);
}