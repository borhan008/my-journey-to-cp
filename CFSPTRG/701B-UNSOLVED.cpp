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
	ll n, k, q, i, l , r;
	cin >> n >> q >> k;
	ll ar[n];
	i=0;
	fo(i, n) cin >> ar[i];
	ll arSum[n];
	arSum[0] = min(k, ar[1]-1)-1;

	for( i=1; i<n-1; i++){
		arSum[i] = arSum[i-1] + ar[i]-ar[i-1]-1;
	}
	arSum[n-1] = k -ar[r-2]-1+arSum[n-2];

	while(q--){
		cin >> l >> r;
		if(l==r) cout << k-1 << endl;
		else {
			ll ans=0;
			
			ans+= ar[l]-2;
			//cout << ar[l]-2 << " " << k - ar[r-2]-1   << endl;
			ans += (k -ar[r-2]-1);

			l++;
			r--;
			if(r>=l){
				ans+=arSum[r]-arSum[l-1];
			}
			cout << ans << endl;
		}
	}
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
	//cin >> t;
	while(t--){
		solve();
	}
}