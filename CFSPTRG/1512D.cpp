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
	ll n, i=0;
	cin >> n;
	ll arr[n+2];
	fo(i, n+2) cin >> arr[i];
	sort(arr, arr+n+2);
	ll sum = 0;
	i=0;
	fo(i, n) sum+=arr[i];
	if(sum == arr[n+1] || sum == arr[n]){
		fo(i,n) cout << arr[i] << " ";
	}else{
		ll flag = 0;
		ll j, k;
		i=0;
		fo(i, n){
			ll sum2 = sum - arr[i] + arr[n];
			if(sum2 == arr[n+1]){
				flag = 1;
				j=i;
				k=n+1;
				break;
			}
		}
		i=0;
		fo(i, n){
			ll sum2 = sum - arr[i] + arr[n+1];
			if(sum2 == arr[n]){
				flag = 1;
				j=i;
				k=n;
				break;
			}
		}
		
		if(flag == 1){
			fo(i, n+2){
				if(i==j || i==k) continue;
				cout << arr[i] << " ";
			}
		}else{
			cout << -1;
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