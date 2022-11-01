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
	ll n;
	sl(n);
	ll ar[n];
	ll i=0;
	fo(i, n) cin >> ar[i];
	//sort(ar, ar+n);
	ll sumeven=0, sumodd=0;
	fo(i,n){
		if(i&1){
			sumodd += ar[i];
		}else{
			sumeven += ar[i];
		}
	}
	if(n==2){
		if(ar[0] > ar[1]){
			cout << ar[0] << " " << 1;
		}else{
			cout << 1 << " " << ar[1];
		}
	}
	else if(sumodd > sumeven){

		fo(i, n){
			//cout << ar[i]%2 << " ";
			if(i%2) cout << ar[i] << " ";
			else cout << 1 << " ";
			//if(ar[i]%2 == 1) cout << ar[i] << " ";
			//else cout << 1 << " ";
		}
		
	}else{
		fo(i, n){
			if(i%2) cout << 1 << " ";
			else cout << ar[i] << " ";
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