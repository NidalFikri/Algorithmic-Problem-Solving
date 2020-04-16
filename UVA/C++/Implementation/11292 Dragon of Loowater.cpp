#include <bits/stdc++.h>
	using namespace std;
	typedef long long ll ;
	typedef unsigned long long ull ;
	#define pb push_back
	#define all(v) (v).begin(), (v).end()
	#define mp make_pair
	#define rep(i,a,b) for (int i = a; i < b; i++)
	#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	void time ()
	{
		 cout<<endl<<"Clock ticks: "<<clock()<<" Seconds: "<<(double)clock()/CLOCKS_PER_SEC*1000;
	}
	//-std=c++0x


int main()
{
	int n , m ;
	while (cin >> n >> m && n && m )
{
	int heads[n] , knights[m] ;
	int input ;

	rep(i,0,n)
	{
		cin >> heads[i];
	}

	rep(i,0,m)
	{
		cin >> knights[i];
	}
	sort(knights,knights+m) , sort(heads,heads+n);

	ull sum =0 ;
	bool status = false ;
	rep(i,0,n)
	{
		auto it2 =lower_bound(knights,knights+m,heads[i]) ;
		if (it2-knights < m )
		{
			sum+=*it2 ;
			knights[it2-knights] = -1 ;
			heads[i]= -1;
		}else { cout<<"Loowater is doomed!"<<endl; status = true ; break ;}
	}
	if (status) continue ;
	cout<<sum<<endl;
}

return 0;
}
