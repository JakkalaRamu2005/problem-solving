#include <bits/stdc++.h>
using namespace std;

int main(){


    int arr[]={2,3,1,2,4};
    int n=5;
    int target = 7;

    int i=0;
    int j=0;
    int sum=0;
    int min_len = INT_MAX;
    while(j<n){ //just replace this line int j=0; j<n; j++
        sum+=arr[j];
        while (sum>=target){
            min_len = min(min_len, j-i+1);
            sum-=arr[i];
            i++;
        }
        j++;

    }
    cout << min_len << endl;
}