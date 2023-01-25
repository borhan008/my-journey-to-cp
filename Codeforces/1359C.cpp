#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define inf 1e18
#define fo(i,n) for(ll i=0; i<n; i++)
#define sl(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(x) printf("%s\n", x)
#define all(x) x.begin(), x.end()
#define input(n,x) fo(i, n) sl(x[i])
#define output(n, x) fo(i, n) printf("%lld ", x[i])
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
void solve(){
		ll h,c,t,x,ans=2;
		cin>>h>>c>>t;
 
		if(h+c-2*t) x=(c-t)/(h+c-2*t);
		else x=0;
 
		double diff=abs((double)t-((h+c)/2.0)),chk;
 
		chk=abs((double)t-(x*h+(x-1.0)*c)/(2.0*x-1.0));
		if(chk<diff && x-1>=0){
			ans=2*x-1;
			diff=chk;
		}
		
		chk=abs((double)t-((x+1.0)*h+x*c)/(2.0*x+1.0));
		if(chk<diff && x>0){
			ans=2*x+1;
			diff=chk;
		}
		cout<<ans<<endl;
}

int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}