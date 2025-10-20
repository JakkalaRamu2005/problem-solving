	string words;

    getline(cin,words);
	
	stringstream ss(words);
	map<string,int> wordCount;
	
	while(ss >> words){
	    wordCount[words]++;
	}
	
	
	for(auto key: wordCount){
	    cout << key.first << " " << key.second << endl;
	}
	