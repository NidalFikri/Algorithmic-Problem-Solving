    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n, t;
        cin >> n >> t;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 1; i < n; i++){
            a[i] += a[i-1];
        }
        int mx = 0;
        int s = 0;
        for(int i = 0; i < n; i++){
            int ind = upper_bound(a+i, a+n,  s+t) - a;
            mx = max(mx, ind-i);
            s = a[i];
        }
        cout << mx;
        return 0;
    }
