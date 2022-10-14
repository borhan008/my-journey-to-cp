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

void solve(){
	ll n,m,x;
	cin >> n >> m;
	vector<ll> a(n+5,0);
	for(ll i=1; i<=n; i++){
		cin >>x;
		a[i] = x;
	}
	vector<ll> a2(m+2, 0);
	for(ll i=1; i<=n; i++){
		if(a[i] <= m+1-a[i]){
			if(a2[a[i]] == 0){
				a2[a[i]] = 1;
			}else{
				a2[m+1-a[i]]=1;
			}
		}else{
			if(a2[m+1-a[i]] == 0){
				a2[m+1-a[i]] = 1;
			}else{
				a2[a[i]] = 1;
			}
		}
	}
	for(ll i=1; i<=m; i++){
		cout << (a2[i] == 1 ? "A" : "B");
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