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
	string s ;
	set <string> st ;
	bool status = false ;
	string sum ="";
	while ( cin >> s)
	{
		rep(i,0,s.size())
		{
			if (isalpha(s[i])) s[i] = tolower(s[i]);
			else
			{
				if (s[i] == '-') continue ;
				s[i] ='0';
			}

		}

		rep(i,0,s.size())		//deleting non-chars like---> :".,  etc
		{
			if (s[i]!= '0') sum+=s[i];
			else if (s[i] == '0')
			{
				st.insert(sum);
				sum="";
			}
		}
		s = sum ;
		sum = "" ;

		if (s[s.size()-1] =='-') {status = true ; s.pop_back(); sum+=s; continue ;}
		else st.insert(s);

		if (status)
		{
				sum+=s ;
				st.insert(sum);
				sum ="";
				status = false ;

		}
	}
	for (auto it = st.begin() ; it != st.end() ; it++)
	{
		if (*it =="") continue ;
		cout<<*it<<endl;
	}

return 0;
}
