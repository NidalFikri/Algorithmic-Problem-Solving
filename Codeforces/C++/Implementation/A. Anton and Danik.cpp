    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int n , a =0 ,d =0 ;
        string s ;
     
        cin >> n ;
        cin >> s ;
     
        for (int u = 0 ; u < n ; u++) {
     
            if (s[u] =='A') a++;
            else d++;
        }
        if (a>d) cout <<"Anton";
            else if (a<d) cout <<"Danik";
        else cout <<"Friendship";
        return 0;
    }
