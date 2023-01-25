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
	string s1, s2;
	cin >> s1 >> s2;
	ll cnt=0;
	if(s1.size() < s2.size()) {
		pl(0);
		return;
	}
	for(ll i=0; i < s1.length() - s2.size()+1; i++){
		string temp = "";
		ll x;
		for(ll j=i; j<s2.size()+i; j++){
			if(j >= s1.size()) continue;
			temp+=s1[j];
			x=j;
		}
		if(temp == s2) {
			s1[x] = '#';
			cnt++;
		}
	}
	pl(cnt);
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