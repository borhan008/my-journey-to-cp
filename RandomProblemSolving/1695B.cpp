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
vi x(55,0);
void solve(){
	ll n;
	cin >> n;
	ll s;
	ll max = INT_MAX;
	ll maxi=-1;
	for(ll i=1; i<=n; i++){
		cin >> s;
		x[i] = s;
		if(max > x[i]){
			maxi = i;
			max = x[i];
		}
		
	}
	if(n%2 != 0){
	ps("Mike");
	}else{
		ps(maxi%2 == 0 ? "Mike" : "Joe");
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