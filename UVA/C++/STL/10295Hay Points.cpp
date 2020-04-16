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
	int m , n ;
	cin >> m >> n ;
	map <string , int> mp ;
	string Sinput ;
	int Iinput ;
	rep(i,0,m)
	{
		cin >> Sinput >> Iinput ;
		mp[Sinput] = Iinput ;
	}
	ll sum = 0 ;
	while (n)
	{
		cin >> Sinput ;
		if (Sinput == ".") {cout<<sum<<endl; sum = 0 ; n-- ;}
		else
		{
			if (mp.find(Sinput) != mp.end()) sum+= mp[Sinput];
		}
	}

return 0;
}
