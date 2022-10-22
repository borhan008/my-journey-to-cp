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
#define fo(i,n) for(i=0; i<n; i++)
#define sl(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(x) printf("%s\n", x)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define YES printf("YES\n");
#define NO printf("NO\n");
void solve(){
	ll n,i, sum=0;
	cin >> n;
	ll arr[n];
	vector<pair<ll, ll>> x;
	
	i=0;
	fo(i,n){
		 cin >> arr[i];
		 x.pb({arr[i], i+1});
		 sum+=arr[i];
	}
	sort(x.begin(), x.end());
	//ll psum[n];
	//psum[0] = arr[0];
	//for(i=1; i<n; i++) psum[i] = psum[i-1]+arr[i];
	//bool ans[n];
	//fo(i,n) ans[i]=false;
	//ans[n-1]  = true;
	ll cnt=1;
	
	for(i=n-2; i>=0; i--){
		sum -= x[i+1].F;
		if(x[i+1].F > sum) break;
		else cnt++;
	}
	vi ans;
	//ll cnt=0;
	cout << cnt << endl;
	for(ll j=n-1; j>=n-cnt; j--){
		ans.pb(x[j].S);
	}
		sort(ans.begin(), ans.end());

	//pl(cnt);
	for(auto l : ans) cout << l << " ";
	cout << endl;
}
ll lcm(ll a, ll b){
	ll m = gcd(a,b);
	return ((a*b)/m);
}


ll gcd(ll a, ll b){
	return a==0 ? 0 : gcd(b, a%b);
}
int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}