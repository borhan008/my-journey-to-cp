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
void solve(){
	ll n, k, i;
	cin >> n >> k;
	if(n==k){
		YES;
		fo(i, n) cout << "1 " ;
	}else if(k > n){
		cout << "NO";
	}
	else if((n%2 == 1) && k%2==0){
		cout << "NO";
	}else if(n%2 == 1){
		YES;
		cout << (n-k +1 ) << " ";
		ll x = k-1;
		fo(i, x) cout << "1 ";
	}else{
		if((n - (k-1)*2) <= 0){
			if((ll)(n-k +1) > 0 && (n-k+1)%2 != 0){
				YES;
			cout << (n-k +1 ) << " ";
			ll x = k-1;
			fo(i, x) cout << "1 ";
			} else {
				cout << "NO";
			}
			
		}else{
		YES;
		cout << (n - (k-1)*2) << " ";
		ll x = k-1;
		fo(i, x) cout << "2 ";
		}
		
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