    #include <bits/stdc++.h>
    using namespace std;
     
    typedef long long ll ;
    typedef vector<int> vi ;
    typedef pair <int,int> pii;
    #define pb push_back
    #define all(v) (v).begin(), (v).end()
    #define mp make_pair
    #define rep(i,a,b) for (int i = a; i < b; i++)
    #define per(i,a,b) for (int i = a; i < b; i--)
     
     
     
    #include <iostream>
     
    using namespace std;
     
    int main()
    {
    string s;
    cin>>s;
            int x=s.size();
            bool state =false;
    for(int i=0;i<x;++i){
        if((s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')){
                i+=2;
                if(state){
                        cout<<" ";
                state=false;
                }
     
        }
    else {
            cout<<s[i];
    state=true;
    }
    }
    //again
        return 0;
    }
