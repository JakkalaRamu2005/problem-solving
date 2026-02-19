#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    string s;
    cin >> s;
    char operato;

    string a = "", b = "";

    for (auto i: s) {
        if (i == '+' || i == '-' || i == '*' || i == '/') {
            operato = i;
            a = b;
            b = "";
        } else {
            b += i;
        }
    }

   
   int num1 = stoi(a);
   int num2 = stoi(b);
   
//   cout << num1 <<  " " << num2 << endl;
   
  if(operato=='+'){
      cout << num2+num1;
  }else if(operato=='-'){
      cout << num1-num2;
  }else if(operato=='*'){
      cout << num2*num1;
  }else if(operato=='/'){
       cout << num1/num2;
  }

}

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
   
   int a;
   cin>>a;
   char op; cin>>op;
   int b; cin>>b;
   
   if(op=='+'){
       cout << a+b;
   }else if(op=='-'){
       cout << a-b;
   }else if(op=='*'){
       cout << a*b;
   }else if(op=='/'){
       cout << a/b;
   }

}
