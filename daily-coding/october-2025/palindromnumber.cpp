#include <bits/stdc++.h>
using namespace std;

int main(){

int x = -121;
int temp=0;
// solving the question using the brute force appraoch
string s="";
while(x!=0){
    int last_digt = x%10;
    s+=to_string(last_digt);
    x/=10;
}

cout << s << endl;

bool isPalindrome(int x) {
    if (x < 0) return false; // negative numbers are not palindrome

    int original = x;
    long long reversed = 0;  // use long long to avoid overflow

    while (x != 0) {
        int digit = x % 10;          // take last digit
        reversed = reversed * 10 + digit; // build the reversed number
        x /= 10;                     // remove last digit
    }

    return original == reversed;
}






    return 0;
}