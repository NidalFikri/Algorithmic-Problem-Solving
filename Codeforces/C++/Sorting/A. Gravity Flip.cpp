     #include <bits/stdc++.h>
    	using namespace std;
     
    	typedef long long ll ;
    	typedef unsigned long long ull ;
    	typedef vector<int> vi ;
    	typedef pair <int,int> pii;
    	#define pb push_back
    	#define all(v) (v).begin(), (v).end()
    	#define mp make_pair
    	#define rep(i,a,b) for (int i = a; i < b; i++)
        #define FastIO ios_base::sync_with_stdio(0); cout.tie(0);
    	void time ()
    	{
    		 cout<<endl<<"Clock ticks: "<<clock()<<" Seconds: "<<(double)clock()/CLOCKS_PER_SEC*1000;
    	}
    	//-std=c++0x
    int main()
    {
        int n ;
        cin >> n ;
        int arr[n];
     
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
     
        sort(arr,arr+n);
     
        for (int i = 0 ; i < n ; i++)
        {
            cout<< arr[i] <<" ";
        }
    return 0;
    }
