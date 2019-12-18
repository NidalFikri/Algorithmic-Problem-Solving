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
     
     
    int main() {
    	int n,l,x=0;
    	long double y,z;
    	cin>>n>>l;
    	int a[n];
    	for(int i=0;i<n;++i){
    	cin>>a[i];
    	}
    	sort(a,a+n);
    	for(int i=1;i<n;++i){
    	    if(abs(a[i]-a[i-1])>x) x=abs(a[i]-a[i-1]);
    	}
    	y=a[0];
    	z=l-a[n-1];
    	cout<<fixed;
    	cout<<max(max(y,z),(long double)x/2);
    	    return 0;
    	return 0;
    }
