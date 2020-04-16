#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define mp make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void time() {
	cout << endl << "Clock ticks: " << clock() << " Seconds: "
			<< (double) clock() / CLOCKS_PER_SEC * 1000;
}
//-std=c++0x





int main()
{
	int t ;
	cin >> t ;
	while (t--)
	{
		int n ; cin >> n ;
		int input ;

		multiset <int> st ;
		multiset <int> :: iterator it ;
		ull sum = 0 ;
			rep(i,0,n)
		{
			cin >> input;
			st.insert(input);

			if (i >= 1)
				{
				it = upper_bound(all(st),input);	// 1 2 2 2 "2" 3
				sum += distance(st.begin(),it)-1 ;

				}
		}
			cout<<sum<<endl;


	}
	return 0;
}
