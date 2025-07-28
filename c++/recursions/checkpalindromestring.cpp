#include <bits/stdc++.h>
using namespace std;

bool palindromestring(int i, string name){
    int n=name.size();
    if(i>=n/2){
        return true;
    }
    if(name[i]!=name[n-i-1])
    return false;
    
    return palindromestring(i+1,name);
}
int main(){

    string name="madam";
    cout << palindromestring(0, name);
    
}