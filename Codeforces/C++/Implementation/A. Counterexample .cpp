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
    	//-std=c++0x
    	int n , m ;
    	bool is_prime (int m)
    	{
    		if (m%2 == 0) return false ;
    		for (int i = 3 ; i*i <= m  ; i+=2 )
    		{
    			if (m%i == 0) return false ;
    		}
    		return true ;
    	}
    	int main() {
     
    	ll l , r ;
    	cin >> l >> r ;
    	if (r-l < 2) 
    	{
    		cout<<-1;
    		return 0 ;
    	}
    	bool flag = false ;
    	if (l %2 != 0) flag = true ;
    	if (flag)
    	{
    		l++;
    		if (r-l < 2) 
    			{
    				cout<<-1;
    				return 0 ;
    			}
    		cout<<l<<" "<<l+1<<" "<<l+2;
    	} else cout<<l<<" "<<l+1<<" "<<l+2;
    	
    	
    	return 0 ;
    	}
