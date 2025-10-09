#include <bits/stdc++.h>
using namespace std;


double add(int a, int b){
    return a+b;
}
double subtract(int a, int b){
    return a-b;
}
double multiply(int a, int b){
    return a*b;
}
double divide(int a, int b){
    if(b!=0){
        return a/b;
    }else{
        cout << "Zero Division Error";
    }
}
int main(){
    float a,b;
    string opt;
    cout << "Enter the value of the a and b:" << endl;
    cin >> a >> b;
    cout << "Enter the value of the operator: " << endl;
    cin >> opt;
    if(opt=="+"){
        cout << "Sum of a and b is:" <<add(a,b);
    }else if(opt=="-"){
        cout << "the difference b/w a and b"<<subtract(a,b);
    }else if(opt=="*"){
        cout << "the a *b is" << multiply(a,b);
    }else if(opt=="/"){
        cout << "a divided by b is" <<divide(a,b);
    }else{
        cout << "Invalid operator please Enter the correct one.";
    }
}