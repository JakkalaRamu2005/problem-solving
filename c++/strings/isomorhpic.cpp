#include <bits/stdc++.h>
using namespace std;



bool checkIsomorphicString(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    map<char,char> map;
    for(int i=0; s1.length(); i++){
        if(map.find(s1[i])==map.end()){
            map[s1[i]]==s2[i];
        }
        else{
            if(map[s1[i]]!=s2[i]){
                return false;
            }
        }

        return true;
    }
    

}

bool helper(string s1, string s2){
    return checkIsomorphicString(s1,s2) && checkIsomorphicString(s2,s1);
}


int main(){
    string s1 = "night";
    string s2 = "thing";

    cout << helper(s1,s2);

}