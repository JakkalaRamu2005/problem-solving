#include <bits/stdc++.h>
using namespace std;

int main(){

string name="Ramu";
// cout << name.length();
string last_name = "Jakkala";
string full_name = "RamuJakkala";
/* for (char letter: last_name){
    name.push_back(letter);
} */
// name.push_back('!');
// name.push_back('x');
// cout << name << endl;

/* for(char i: last_name){
    full_name.pop_back();
}
cout << full_name << endl; */


/* working on the find method */
/* 
string str = "NxtWave";

cout << str.find('t') <<"\n";
cout << str.find("Wave") <<"\n"; */



  /* String::npos method, so far I have learn pop_back()->removes the last element, push_back() takes the parameter one character 
  
  add the it at the end of the string.
  length-> is used to check the length of the string
  find-> is used to check at the index value it which the sub string in the string starts.
  
  */

//   string ::npos method
//   string str="NxtWave";
 /*  if(str.find('z')==string::npos){
    cout <<"Not found" << endl;
  }else{
    cout << "found" << endl;
  } */

   /* **********sub str********* */
//    cout << str.substr(3,4);



 /* stringstream ss */
 string str = "1,5,9,32,54";
 stringstream ss(str);
 while(getline(ss,str,',')){
    cout << str << endl;
 }

    return 0;
}