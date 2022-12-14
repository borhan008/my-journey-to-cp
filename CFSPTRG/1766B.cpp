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
#define inf 2e18
#define fo(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define input(n,x) fo(i, n) cin >> x[i];
#define output(x) for(auto i : x) printf("%lld ", i)
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl "\n"


void solve(){
	ll n; cin >> n;
	string s; cin >> s;
	map<string, ll> ss;
	string last="";
	for(ll i=0; i<=n-2; i++){
		string x = s.substr(i,2);
		if(last==x){
			last = " ";
		}else{
			ss[x]++;
			last=x;
		}
	}
	for(auto l:ss){
		if(l.second >=  2){
			YES; return;
		}
	}
	NO;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}