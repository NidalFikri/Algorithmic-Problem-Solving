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
const double ebs = 10e6 ;


bool is_integer(float k)
{
  return std::floor(k) == k;
}

int main() {

	string input ;
	map <int , int> mp ;
	vector <int> output ;
	while (cin >> input && input != "#")
	{
		int Qnum , period ;
		cin >> Qnum >> period ;
		mp[Qnum] = period ;
		if (period == 1 ) output.pb(Qnum);
	}
	int k ;
	cin >> k ;

	sort(all(output));
	for (int n = 0 ; n <output.size() && k ; n++) {cout<<output[n]<<endl; k-- ;}
	output.clear();

	map <int , int> :: iterator it ;
	double cnt2 = 2 ;
	for (int i = 2 ; i <= 10000 && k; i++ , cnt2++)
	{
		int cnt ;
		for ( it = mp.begin() ; it != mp.end() ; it++)
		{
			if (is_integer(cnt2/it->second)) output.pb(it->first) ;
		}
		sort(all(output));
		for (int n = 0 ; n <output.size() && k; n++) {cout<<output[n]<<endl;k--;}
		output.clear();
	}
	return 0;
}
