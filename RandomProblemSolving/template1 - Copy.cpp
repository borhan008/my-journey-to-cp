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
	string s;
	cin >> s;
	ll cnt=2;
	for(ll i=0; i<s.length(); i++){
		ll j=i;
		ll k = s.length() - 1;
		ll localcnt = 0;

		while(k >= j && j < s.length() && k >= 0){
			if(s[k] != s[j]){
				localcnt = 0;
		
				if(localcnt > 0) j=i;
				else k--;

			}else{
				cout << i << endl;
				if(k==j) localcnt--;
				localcnt+=2;

				j++;
				k--;
			}
		}
		cnt = max(cnt, localcnt);
	}
	cout << cnt << endl;
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