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
#define allzero(x) memset(x,0, sizeof(x))
void solve(){
	ll  n,x;
	cin>>n;
	ll arr[n][n];
	ll i=0;
	allzero(arr);
	fo(i,n){
		cin >> x;
		ll a=i;
		ll b=i;
		ll y=x;
		while(x--){
			arr[a][b]=y;
			if(b!=0 && arr[a][b-1]==0){
				b--;
			}
			else a++;
		}
	}
	i=0;
	fo(i,n){
		for(ll j=0; j<=i; j++) cout << arr[i][j] << " ";
		cout << endl;
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
	//cin >> t;
	while(t--){
		solve();
	}
}