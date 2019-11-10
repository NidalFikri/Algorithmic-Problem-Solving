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
     
    vector <vector <int > > v(2000) ;
    	int bfs (int root)
    	{
    		queue <int> q ;
    		q.push(root);
    		int cnt = 0 ;
    		while (!q.empty())
    		{
    			cnt++;
    			for(int k=q.size(); k>0 ; k--){
    				int child = q.front();
    				q.pop();
    				for (int i = 0 ; i < v[child].size(); i++)
    				{
    					q.push(v[child][i]);
    				}
    			}
    		}
    		return cnt ;
     
    	}
     
     
    int main()
    {
    	int  n ;
    	cin >> n ;
    	vector <int> super ;
    	int input ;
     
    	rep(i,0,n)
    	{
    		cin >> input ;
    		if ( input != -1) v[input-1].pb(i);
    		else super.pb(i);
    	}
    	int maxi = 0 ;
    	rep(i,0,super.size())
    	{
    		maxi = max (bfs(super[i]),maxi);
    	}
    	cout<<maxi;
    	return 0;
    }
