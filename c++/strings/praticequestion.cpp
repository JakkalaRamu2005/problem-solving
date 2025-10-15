#include <bits/stdc++.h>
using namespace std;


int main(){

    // below is the brute force approach to solve this problem
    string s1 = "night";
    string s2 = "thing";
/* 
    string s1 = "night";
    string s2 = "thing";


    sort(s1.begin(),s1.end());
    sort(s2.begin(), s2.end());


    if(s1.length()!=s2.length()){
        cout << "Not a valid Anagram" << endl;
    }else{
        if(s2==s1){
            cout <<"Equal valid";
        }else{
            cout << "Not valid anagrams";
        }
    } */

// optimal solution for this problem
int arr[26]={0};
// int size = sizeof(arr)/sizeof(arr[0]);
// cout << size << endl;
// we are initilizing arr to 0
for(int i=0; i<s1.size(); i++){
    arr[s1[i]-'a']+=1;
    
}
for(int j=0; j<s2.size(); j++){
    arr[s2[j]-'a']-=1;
}
bool isAnagram=true;
for (int j:arr){
    if(j!=0){
        cout << "Not a valid anagram" << endl;
        isAnagram=false;
        break;
    }
}
if(isAnagram){
    cout << "valid Anagram" << endl;
}

    return 0;
}