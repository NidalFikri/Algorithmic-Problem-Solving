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
     
     
    int main()
    {
    int n;
        cin >> n;
        ll a[n];
        ll s[n];
        ll sum = 0;
        for(int i =0 ;i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        s[0] = a[0];
        for(int i = 1; i < n; i++){
            s[i] = s[i-1] + a[i];
        }
     
        if(sum % 3 != 0){
            cout << 0 << endl;
            return 0;
        }
        ll c = 0;
        ll x = sum / 3;
        ll y = 2 * sum / 3;
        ll res = 0;
        for(int i = 0; i < n-1; i++){
            if(s[i] == y){
                res += c;
            }
            if(s[i] == x){
                c += 1;
            }
        }
        cout << res << endl;
        return 0;
    }
