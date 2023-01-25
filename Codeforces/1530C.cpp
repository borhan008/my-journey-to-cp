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
void solve(){
	ll n,x;
	cin >> n;
	vi b;
	vi a;
	fo(i, n) {
		cin >> x;
		a.pb(x);
	}
	fo(i, n) {
		cin >> x;
		b.pb(x);
	}	
	ll k = n/4;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll sumA=0, sumB=0;
	for(ll i=n-1; i>=n/4; i--){
		if(i < 0) continue;
		sumA += a[i];
		sumB += b[i];
	
	}
	//cout << sumA << " " << sumB << endl;
	
	if(sumA >= sumB){
		ps("0");
		return;
	}
	ll prev=n;
	ll i=n/4;
	ll j=n/4 - 1;
	ll ans=0;
	while(sumA < sumB){
		sumA += 100;
		x = (prev+1);

		if((prev - prev/4) == (x - x/4)){
			sumA -= a[i];
			a.pb(100);
			b.pb(0);
			i++;
		}else{
			a.pb(100);
			b.pb(0);
			if(j >= 0){
				sumB += b[j];
				j--;
			}			

		}
		ans++;
		prev++;
		
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
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}