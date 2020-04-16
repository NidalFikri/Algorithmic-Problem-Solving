    #include <bits/stdc++.h>
    using namespace std;
     
    typedef long long ll ;
    typedef vector<int> vi ;
    typedef pair <int,int> pii;
    #define pb push_back
    #define all(v) (v).begin(), (v).end()
    #define mp make_pair
    #define rep(i,a,b) for (int i = a; i < b; i++)
    #define per(i,a,b) for (int i = a; i < b; i--)
     
     
    	string s1,s2;
    	vector <int> v ;
    	void fun(int index , int final)
    	{
    		if (index == s2.size() )
    		{
    			v.pb(final);
    			return ;
    		}
    		if (s2[index] == '+') fun(index+1,final+1);
    		else if (s2[index] =='-') fun(index+1,final-1);
    		else
    		{
    			fun(index+1,final+1);
    			fun(index+1,final-1);
    		}
    	}
     
    int main()
    {
    	int sum = 0 ;
    	cin >> s1 >> s2 ;
    	rep(i,0,s1.size())
    	{
    		if (s1[i] == '+') sum++;
    		else sum--;
    	}
    	fun(0,0);
    	double cnt =0 ;
    	rep(i,0,v.size())
    	{
    		if (v[i] == sum) cnt++;
    	}
    	double output = cnt/v.size();
    	printf("%.13f",output);
     
    	return 0;
    }
