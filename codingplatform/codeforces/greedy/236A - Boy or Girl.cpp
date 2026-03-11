int main() {
	// your code goes here
	string s; cin>>s;
    set<char> uni(s.begin(),s.end());
    
    
    if(uni.size()%2==0) cout << "CHAT WITH HER!\n";
	else cout << "IGNORE HIM!\n";


}