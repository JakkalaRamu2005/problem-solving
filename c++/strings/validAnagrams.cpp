#include <bits/stdc++.h>
using namespace std;



bool validAnagrams(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    int arr[26]={0};
    for(int i=0; i<s1.length(); i++){
        arr[s1[i]-'a']+=1;
    }


    for(int i=0; i<s2.length(); i++){
        arr[s1[i]-'a']-=1;
    }

    for(int i=0; i<s1.length(); i++){
        if(arr[i]!=0){
            return false;
        }

    }
    return true;

}


int main(){
    string s1 = "night";
    string s2 = "thing";

    cout << validAnagrams(s1,s2);

}