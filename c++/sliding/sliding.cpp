#include <bits/stdc++.h>
using namespace std;
//brute force approach
int main(){

int arr[]= {2,1,5,1,3,2};
int n=6;
int k = 3;

int max_sum = 0;
for(int i=0; i<=n-k; i++){
    int sum=0;
    for(int j=i; j<i+k; j++){
        sum+=arr[j];
    }
    // cout << sum << endl;
    max_sum = max(max_sum, sum);
}
cout << max_sum << endl;



}