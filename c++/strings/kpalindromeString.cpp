#include <bits/stdc++.h>
using namespace std;



bool kpalindromeString(string str, int k){
    if(str.length()==k){
        return true;
    }
    if(k>str.length()){
        return false;
    }

    int arr[26]={0};
    for(int i=0; i<str.length(); i++){
        arr[str[i]-'a']+=1;
    }
    int count=0;
    for(int i=0; i<26; i++){
        if(arr[i]%2==1){
            count+=1;
        }
    }

   
    return count <=k;
}

int main(){

string str="banana";
int k = 2;
cout << kpalindromeString(str,k);
return 0;




}