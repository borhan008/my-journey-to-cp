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
vi a(105,0);
void solve(){
	ll i,n,k,v,x, intAns, sum=0;
	float ans;
	cin >> n >> k >> v;
	fo(i,n){
		cin >> x;
		a[i] = x;
		sum+=x;
	}
	ans = (1.00*v*(k+n) - sum)/k;
	intAns = (v*(k+n) - sum)/k;
	if(ans == intAns && ans >= 1 && intAns >= 1)
	pl(intAns);
	else ps("-1");

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