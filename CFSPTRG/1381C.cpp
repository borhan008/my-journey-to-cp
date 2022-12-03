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

ll lcm(ll a, ll b){
	ll m = gcd(a,b);
	return ((a*b)/m);
}


ll gcd(ll a, ll b){
	return a==0 ? 0 : gcd(b, a%b);
}

void solve(){
	ll n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	vi ans;
	fo(i, n-1){
		if(s1[i] != s1[i+1]){
			ans.pb(i+1);
			s1[0]=s1[i+1];
		}
	}
	for(ll i=n-1; i>=0; i--){
		if(s2[i] != s1[0]){
			ans.pb(i+1);
			s1[0]=s2[i];
		}
	}	
	cout << ans.size() << " ";
	output((ll)ans.size(), ans);
	cout << endl;

}

int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}