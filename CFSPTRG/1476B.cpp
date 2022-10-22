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
	ll i,k,n;
	cin >> n >> k;
	ll arr[n];
	ll sum =0 ;
	fo(i, n){
		cin >> arr[i];
		sum+=arr[i];
	}
	ll newSum = sum;
	ll sumDiff  = 0;
	for(i=n-1; i>=1; i--){
		newSum = newSum - arr[i];
		float x =(float)1.000*arr[i]/newSum;
		float per = (float)1.000*k/100;
		if(x <= per) continue;
		else {
			ll newSum2 = ceil((100.000*1.000*arr[i])/k);
			sumDiff = max(sumDiff, newSum2-newSum);
		};
	}
	pl(sumDiff);
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