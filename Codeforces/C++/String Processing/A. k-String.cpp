    #include <bits/stdc++.h>
    using namespace std;
     
    typedef long long ll ;
    typedef vector<int> vi ;
    typedef pair <int,int> pii;
    #define pb push_back
    #define all(v) (v).begin(), (v).end()
    #define mp make_pair
    #define rep(i,a,b) for (int i = a; i < b; i++)
     
    void time ()
    {
    	 cout<<endl<<"Clock ticks: "<<clock()<<" Seconds: "<<(double)clock()/CLOCKS_PER_SEC*1000;
    }
     
    int main() {
    	int n ;
    	cin >> n ;
    	char x ;
    	int arr[26] ;
    	memset(arr,0,sizeof arr);
    	while (cin >> x && x != '0')
    	{
    		arr[x-'a']++;
    	}
    	int arr2[26];
    	rep(i,0,26)
    	{
    		arr2[i]=arr[i];
    		if (arr[i] != 0 && arr[i] %n != 0)
    		{
    			cout<<-1 ;
    			return 0 ;
    		}
    	}
    	int iter ;
    	
     
    	rep(i,0,n)
    	{
    		rep(j,0,26)
    		{
    			iter = arr2[j] / n ;
    			if (arr[j] != 0 )	 {
    			rep (k,0,iter)
     
    			{
    				cout<<char(97+j);
    			}
    			arr[j]-=(arr[j]/n) ;
    								 }
    		}
    	}
    	return 0;
    }
