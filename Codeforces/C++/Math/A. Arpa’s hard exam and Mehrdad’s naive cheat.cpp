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
     
     
    	int main() {
    		int x[4]={6,8,4,2};
    		    int n,y;
    		    cin>>n;
    		    if(n==0)
    		    {
    		        cout<<1;
    		    }
    		    else
    		    {
    		         y = n%4;
    		    cout<<x[y];
    		    }
    		
    		return 0 ;
    	}
