#include <bits/stdc++.h>
using namespace std;

int main(){

    string str = "bitStudents";
    cout << str.length() << endl;

    str.push_back('!');
    str.pop_back();
    cout << str << endl;

    cout << str.find('u') << endl; // returns the first occurrence of the char or word

    if(str.find('z')==string::npos){
        cout << "not found" << endl;
    }
    cout << str.substr(0,4) << endl;
    cout << str << endl;

return 0;
}