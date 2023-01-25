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
	ll  n;
	cin >> n;
	ll arr[n];
	fo(i, n) cin >> arr[i];
	ll f= 0;
	fo(i, n-1){
		if(arr[i] != arr[i+1]) f=1;
	}
	if(f==0){
		NO;
		return;
	}
	YES;
	ll a=-1, b=-1;
	for(ll i=0; i<n; i++){
		if(a == -1) a= i;
		else if(arr[i] != arr[a] && b==-1) {
			b=i;
			break;
		}
	}
	
	for(ll i=0; i<n; i++){
		if(arr[i] != arr[a]){
			cout << a+1 << " " << i+1 << endl;
		}
		else if(arr[i] == arr[a] && i!=a){
			cout << b+1 <<  " " << i+1 << endl;
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