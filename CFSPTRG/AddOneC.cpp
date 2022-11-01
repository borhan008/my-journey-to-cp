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
#define YES printf("YES\n")
#define NO printf("NO\n")

ll dp[10][(ll)1e5*2+10];

void solve(){
	ll n, m;
	
	vi x(10, 0);
	sl(n);
	sl(m);
	/*
	//Brute force
	while(n > 0){
		x[n%10]++;
		n/=10;
	}
	
	for(ll i=1; i<=m; i++){
		vi x2(10, 0);
		for(ll j=1; j<=9; j++){
			x2[j]=x[j-1];
		}
		x2[0] = x[9];
		x2[1] += x[9];
		x = x2;
		
	}
	ll ans = 0;
	for(auto l:x){
		//cout << l << " ";
		ans += l;
		
	} 
	pl(ans);
	*/
	while(n>0){
		x[n%10]++;
		n/=10;
	}
	
	ll ans=0;
	for(ll i=0; i<=9; i++){
		ll a = x[i];
		ll p  = dp[i][m];
		ans = (ans+p*a)%(ll)(1e9+7);
	}
	cout << ans << endl;
}
ll lcm(ll a, ll b){
	ll m = gcd(a,b);
	return ((a*b)/m);
}


ll gcd(ll a, ll b){
	
	return a==0 ? 0 : gcd(b, a%b);
}
int main(){
	for(ll i=0; i<=9; i++){
		dp[i][0] = 1;
	}
	
	for(ll i=1; i<=(ll)(1e5*2+10); i++){
		for(ll j=0; j<=8; j++){
			dp[j][i] = dp[j+1][i-1];
		}
		dp[9][i] = (dp[0][i-1] + dp[1][i-1])%((ll)1e9+7);
	}
	for(ll i=0; i<=9; i++){
		dp[i][0] = 1;
	}	
	
	ll t=1;
	
	cin >> t;
	while(t--){
		solve();
	}
}