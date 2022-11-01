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
	string s;
	cin >> n >> s;
	
	vi ans;
	vi pos0, pos1;
	
	
	for(ll i=0; i<n; i++){
		ll newPos = pos0.size() + pos1.size();
		if(s[i] == '0'){
			if(pos1.empty()){
				pos0.push_back(newPos);
			}else{
				newPos  = pos1.back();
				pos1.pop_back();
				pos0.push_back(newPos);
			}
		}else{
			if(pos0.empty()){
				pos1.push_back(newPos);
			}else{
				newPos = pos0.back();
				pos0.pop_back();
				pos1.push_back(newPos);
			}
		}
		ans.pb(newPos);
	}
	cout << pos0.size() + pos1.size() << endl;
	ll i=0;
	fo(i, n) cout << ans[i]+1 << " ";
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