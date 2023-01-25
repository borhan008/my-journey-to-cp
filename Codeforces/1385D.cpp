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
string s;

ll func(ll l , ll r, char x){
	if(l==r) return s[l]!=x; 
	ll cnt = 0;
	for(ll i=l; i<=(l+r)/2; i++){
		if(s[i] != x) cnt++;
	}
	ll cnt2 = func((l+r)/2 + 1, r, x+1);
	
	ll cnt3=0;
	for(ll i = (l+r)/2 + 1; i<=r; i++){
		if(s[i] != x) cnt3++;
	}
	ll cnt4 = func(l, (l+r)/2, x+1);
	
	return min(cnt+cnt2, cnt3+cnt4);
}


void solve(){
	ll n;
	cin >> n >> s;
	cout << func(0, n-1, 'a') << endl;

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