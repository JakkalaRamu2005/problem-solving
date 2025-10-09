#include <bits/stdc++.h>
using namespace std;

int main(){

    bool condition = true;
    while(condition){
        int n;
        cout << "Read input from the User:";
        cin>>n;
        if(n>=1){
            cout << "loop break don't read the input" << endl;
            break;
            condition=false;
        }
        condition=true;
    }


    return 0;
}