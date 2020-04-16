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

int main() {

	int t ;
	cin >> t ;
	string arr[t] ;
	rep(i,0,t) cin >> arr[i];

	rep(i,0,t)
	{
		stack <char> st ;
		rep(j,0,arr[i].size())
		{
			if (isalpha(arr[i][j])) cout<<arr[i][j];
			else if (arr[i][j] == ')')
			{
				cout<< st.top();
				st.pop();
			}
			else if (arr[i][j] != '(') st.push(arr[i][j]);
		}
		while (!st.empty())
		{
			cout<< st.top();
			st.pop();
		}
		cout<<endl;
	}
	return 0;
}
