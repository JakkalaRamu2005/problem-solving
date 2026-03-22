#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    vector < string > nums = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty"
    };
    unordered_map<int,string> mpp={{20,"twenty"},{30,"thirty"},{40,"forty"},{50,"fifty"},{60,"sixty"},{70,"seventy"},{80,"eighty"},{90,"ninety"}};
    
    int n; cin>>n;
    if(n<=20) cout << nums[n] << endl;
    else if(n==30 || n==40 || n==50 || n==60 || n==70 || n==80 || n==90) cout << mpp[n] << endl;
    else{
        int index = n-(n%10);
        // cout << index << endl;
        int sec = n%10;
        
        cout << mpp[index] << '-'<< nums[sec]<<endl;
    }

}
