    //============================================================================
    // Name        : .cpp
    // Author      : Nidal Fikri
    // Version     :
    // Copyright   : Free .
    // Description : Hello World in C++, Ansi-style
    //============================================================================
     
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	string s1 , s2 , s3 ;
    	bool b1 , b2 , b3 ;
    	int counter = 0 ;
    	getline(cin,s1);
    	getline(cin,s2);
    	getline(cin,s3);
    	for (int i = 0 ; i < s1.size() ; i ++){
    			if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ) counter++;
    	}
    	if (counter == 5) b1 = true ;
    	else b1 = false ;
    	counter = 0 ;
    	for (int i = 0 ; i < s2.size() ; i ++){
    				if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u' ) counter++;
    		}
    		if (counter == 7) b2 = true ;
    		else b2 = false ;
    	counter = 0 ;
    	for (int i = 0 ; i < s3.size() ; i ++){
    			if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u' ) counter++;
    	}
    	if (counter == 5) b3 = true ;
    	else b3 = false ;
    	if ( b1 == true && b2 == true && b3 == true )
    		cout <<"YES" ;
    	else cout <<"NO";
    	return 0;
    }
