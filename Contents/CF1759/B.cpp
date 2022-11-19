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
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n");
bool x[101] = {false};
void solve(){
	ll m,s;
	cin >> m >> s;
	vi v;
	bool x[101] = {false};
	ll n;
	fo(i,m) {
		
		cin >> n;
		x[n] = true;
		v.pb(n);
		
	}
	ll sum = 0;
	for(ll i=1; i<=100; i++){
		if(x[i] == false){
			
			sum += i;
			v.pb(i);
		}
		if(sum == s){
			sort(v.begin(), v.end());
			//fo(j, (ll)v.size()) cout << v[j] << " ";

			fo(j, (ll)v.size()-1) {
				if(abs(v[j]-v[j+1]) != 1) {
					NO;
					return;
				}
			}
			YES;
			return;
		}
		if(sum > s) {
			NO;
			return;
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
	cin >> t;
	while(t--){
		solve();
	}
}