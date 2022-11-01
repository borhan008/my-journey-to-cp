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
	cin >> n;
	ll arr[n];
	ll i=0;
	fo(i, n) cin >> arr[i];
	string s[n+1];
	i=0;
	fo(i, n){
		string x;
		if(i==0){
			x.assign(50, 'a');
			s[i] = x;
			for(ll j=arr[i]; j<=50; j++){
				x[j] = 'b';
			}
			s[i+1] =  x;
		}else{
			x=s[i];
			char y = x[arr[i]] == 'a' ? 'b' : 'a';
			for(ll j=arr[i]; j<=50; j++){
				x[j] = y;
			}	
			s[i+1] =  x;
			//s[i] = x;
		}
	}
	
		//cout << x << endl;
	
	for(auto l : s){
		cout << l << endl;
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