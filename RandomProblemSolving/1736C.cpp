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

vi a((int)1e6, 0);

void solve(){
	ll n,x;
	cin >> n;
	for(ll i=0; i<n; i++){
		cin >> x;
		a[i]=x;
	}
	ll count =0;
	ll lastCount = 0;
	for(ll i=0; i<n; i++){
		if(lastCount <= 2) lastCount=0;
		else lastCount--;
		for(ll j=i+lastCount; j<n; j++){
			if(j-i+1 > a[j]) break;
			lastCount++;
		}
		count+=lastCount;
	}
	pl(count);
	
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