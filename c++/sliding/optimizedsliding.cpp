#include <bits/stdc++.h>
using namespace std;
//optimized appraoch of sliding
int main(){

int arr[]= {2,1,5,1,3,2};
int n=6;
int k = 3;

int sum=0;
for(int i=0; i<k; i++){
    sum+=arr[i];
}
int max_sum = sum;

for(int i=k; i<n; i++){
    sum = sum+ arr[i]-arr[i-k];
    max_sum = max(sum,max_sum);
}
cout << max_sum << endl;



}