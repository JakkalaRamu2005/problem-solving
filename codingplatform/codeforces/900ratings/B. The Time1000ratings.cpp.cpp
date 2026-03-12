#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

string s; cin>>s;
int a; cin>>a;
string hour="";
string result="";

for(char ch: s){
    
    if(ch==':'){
        hour = result;
        result="";
    }else{
        result+=ch;
    }
    
}

int mi = stoi(result)+a;
int hrs = mi/60;
int remin = mi-(60*hrs);
hrs+=stoi(hour);



if(hrs==24){
    cout << "00" << ":";
    if(remin<=9){
        cout << 0<<remin;
    }else{
        cout<<remin;
    }
}else{
    hrs = hrs%24;
    if(hrs<=9){
        cout << 0 << hrs<<":";
         if(remin<=9){
        cout << 0<<remin;
    }else{
        cout<<remin;
    }
    }else{
        cout << hrs<<":";
         if(remin<=9){
        cout << 0<<remin;
    }else{
        cout<<remin;
    }
    }
}


return 0;

}


#include <bits/stdc++.h>
using namespace std;

int main() {

    int h, m, a;
    char c;

    cin >> h >> c >> m;
    cin >> a;

    int total = h * 60 + m + a;

    h = (total / 60) % 24;
    m = total % 60;

    printf("%02d:%02d\n", h, m);

}


