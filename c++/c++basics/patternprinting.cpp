#include <bits/stdc++.h>
using namespace std;


int main() {
//     1
//   232
//   34543
//  4567654
// 567898765

int n = 5;
for(int i=1; i<=n; i++){
    
    //space 
    for(int j=1; j<=n-i; j++){
        cout << " ";
    }
    int k=i;
    //numbers
    for(int num=1; num<=i; num++){
        cout << k;
        k++;
    }
    
    k-=1;
    for(int right=1; right<i; right++){
        k--;
        cout << k;
    
    }
    cout << endl;
}

}
