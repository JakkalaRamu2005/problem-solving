#include <bits/stdc++.h>
using namespace std;

int main(){

    string str="the quick brown fox";
    stringstream ss(str);
    string word;

     vector<string> words;
    while(ss >> word){
        // cout << word << endl;
        words.push_back(word);
    }
    string res="";
    for(int i=words.size()-1; i>=0; i--){
        res+=words[i]+" ";
    }
    res.pop_back();       
    cout << res;
}