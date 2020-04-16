    #include <bits/stdc++.h>
    using namespace std ;
    #define all(v) ((v).begin,(v).end())
    int main () {
    	string data;
    	string arr[10];
    	cin >> data;
    	for (int i = 0 ; i< 10 ;i++){
    		cin>>arr[i];}
    	int output[8];
    	int k=0 ,y=0;
    	for (int i =0 ;i<10 ;i++){
    		string sub = data.substr(y,10);     //cuts a bit of it in a new string = sub ,, substr(position,length) :D 
    		if (k > 8 || y > 70) break ;
    		for (int j = 0 ; j <10 ; j++){
    			if (sub == arr[j]) {
    			output[k] = j ;
    			break ;
    		}}
    		k++;
    		y = y +10 ;
    		}
    	for (int i = 0 ; i <8 ;i++){
    		cout<<output[i];}
    	return 0;
    }
