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
	ll m, x,y;
	cin >> m;
	ll a[m];
	input(m,a);
	ll d;
	cin >> d;
	vector<pair<ll,ll>> b;
	for(ll i=0; i<d; i++){
		cin >> x >> y;
		b.pb({x,y});
	}
	sort(a, a+m);
	ll ps[m];
	ps[0]=a[0];
	ll ans1=inf, ans2=inf;
	ll ans=INT_MAX;
	for(ll i=1; i<m; i++) ps[i] = a[i]+ps[i-1];
	for(auto l:b){
		ans1=2e19, ans2=2e19;
		ll p=l.first;
		ll q=l.second;
		
		if(m!=2){
			ll low=lower_bound(a, a+m, p)-a;
			
		if(low > 0)
			{
				ll low2=a[low-1];
				ans1=(low2 >= p ? 0 : abs(p-low2))+
				((ps[m-1]-low2) >= q ? 0 : abs(ps[m-1]-low2-q));
			}
			if(low < m){
				ll high = a[low];
			ans2=
			((ps[m-1]-high) >= q ? 0 : abs(ps[m-1]-high-q));
			}
		cout << min(ans1, ans2) << endl;			
		}else{
			ll low=a[0];
			ll high=a[1];
			ans1=(low >= p ? 0 : abs(p-low))+
			((ps[m-1]-low) >= q ? 0 : abs(ps[m-1]-low-q));
			ans2=(high >= p ? 0 : abs(p-high))+
			((ps[m-1]-high) >= q ? 0 : abs(ps[m-1]-high-q));
		cout << min(ans1, ans2) << endl;				
		}
	}

}

int main(){
	ll t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}