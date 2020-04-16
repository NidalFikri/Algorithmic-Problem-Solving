    //============================================================================
    // Name        : Amusing.cpp
    // Author      : Nidal Fikri
    // Version     :
    // Copyright   : Free For all
    // Description : Hello World in C++, Ansi-style
    //============================================================================
     
    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include<iomanip>
    #include<cmath>
    #include<string>
    #define all(v)			((v).begin()), ((v).end())
    #define sz(v)			((int)((v).size()))
    using namespace std;
     
    int main() {
    	string s1,s2 ,s3 ;
    	cin >> s1 >>s2 >>s3 ;
    	int b ;
    	 string :: iterator it ;
    	 if ( (s3.size()) != (s1.size()) + s2.size()) {
    		 cout <<"NO" ;
    		 return 0 ;
    	 }
    	 for (int i = 0 ; i<s1.size() ; i++){
    		 if (find(all(s3),s1[i]) != s3.end()){
    		 it = find(all(s3),s1[i]);
    		 s3.erase(it);
    	 } }
    	 for (int i = 0 ; i<s2.size() ; i++){
    			 if (find(all(s3),s2[i]) != s3.end()){
    			 it = find(all(s3),s2[i]);
    			 s3.erase(it);
    		 }}
    	 if (s3.size() == 0) {
    		 cout<<"YES";
    	 }else cout <<"NO";
    	return 0;
    }
