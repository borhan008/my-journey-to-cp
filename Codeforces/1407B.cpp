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
#define NO printf("NO\n")
void solve(){
	ll n;
	cin >> n;
	vi a;
	fo(i, n) {
		ll c;
		cin >> c;
		a.pb(c);
	}
	
	sort(a.begin(), a.end(), greater<ll>());
	
	
	cout << a[0] << " ";
	ll lastGCD = a[0];
	a.erase(a.begin());
	
	while(a.size() > 0){
		ll lt=-1;
		ll localGCD=0;
		for(ll i=0; i<a.size(); i++){
			ll y = __gcd(a[i], lastGCD);
			if(y >= localGCD){
				localGCD = y;
				lt=i;
			}
		}
		cout << a[lt] << " ";
		lastGCD = __gcd(lastGCD, a[lt]);
		a.erase(a.begin() + lt);
		
	}


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