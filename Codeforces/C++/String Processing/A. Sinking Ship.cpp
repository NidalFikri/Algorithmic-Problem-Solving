    #include <bits/stdc++.h>
    #define all(v)   (((v).begin()), (v).end())
    using namespace std;
     
     
    int main() {
    	int n ;
    	cin >> n;
    	vector <string> rats ;
    	vector <string> womenAndChild ;
    	//vector <string> child ;
    	vector <string> men ;
    	vector <string> captain ;
    	string input ;
    	string add ;
    	string data[n];
    	bool reserved ;
    	string dumy ;
    	getline(cin,dumy);
    	for (int i = 0 ; i < n ; i++){
    		reserved = false ;
    		getline(cin,data[i]);
    		input = data[i] ;
    		int x = input.find("rat") ;
    		int y = input.find(" ");
    		if (x != -1 && x > y) {
    			reserved = true ;
    			add =input.substr(0,x-1);
    			rats.push_back(add);}
    	///////////////////////////////////////
    			if ( reserved) continue ;
     
    			 x = input.find("woman") ;
    			 y = input.find(" ");
    			if (x != -1 && x > y) {
    			reserved = true ;
    			add =input.substr(0,x-1);
    			womenAndChild.push_back(add);}
    	////////////////////////////////////////
    			if ( reserved) continue ;
     
    			 x = input.find("child") ;
    			 y = input.find(" ");
    			if (x != -1 && x > y) {
    			reserved = true ;
    			add =input.substr(0,x-1);
    			womenAndChild.push_back(add);}
       /////////////////////////////////////////
    			if ( reserved) continue ;
     
    			 x = input.find("man") ;
    			 y = input.find(" ");
    			if (x != -1 && x > y) {
    			reserved = true ;
    			add =input.substr(0,x-1);
    			men.push_back(add);}
    	///////////////////////////////////////
    			if ( reserved) continue ;
     
    			 x = input.find("captain") ;
    			 y = input.find(" ");
    			if (x != -1 && x > y) {
    			reserved = true ;
    			add =input.substr(0,x-1);
    			captain.push_back(add);}
    	}
    	if ( rats.size()) {
    		for ( int i = 0 ; i < rats.size() ; i++){
    			cout<<rats[i]<<endl;}}
     
    		if ( womenAndChild.size()) {
    			for ( int i = 0 ; i < womenAndChild.size() ; i++){
    				cout<<womenAndChild[i]<<endl;}}
     
    		if ( men.size()) {
    			for ( int i = 0 ; i < men.size() ; i++){
    				cout<<men[i]<<endl;}}
     
    		if ( captain.size()) {
    			for ( int i = 0 ; i < captain.size() ; i++){
    				cout<<captain[i]<<endl;}}
     
    	return 0;
    }
