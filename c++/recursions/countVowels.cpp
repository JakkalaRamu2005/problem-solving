#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
    return false;
}
void print(int index, string s, int count){
    if(index==s.size()){
        cout<<count;
        return;
    }
    if(isVowel(s[index])){
        count++;
    }
    print(index+1,s,count);
    
    // count<<count;
    
}
int main() {
	// your code goes here
	string s; 
	getline(cin,s);
	print(0,s,0);
	return 0;

}
