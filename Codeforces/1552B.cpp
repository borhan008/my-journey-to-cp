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
string s1, s2; 

bool checkAns(ll i, string s){
	if(s==s2) return true;
	if(i >= (ll)s1.length()) return false;
	if(i < 0) return false;
	string z = s+s1[i];
	bool ans = checkAns(i+1, s+s1[i]);
	for(ll j=i-1; j>=0; j--){
		z+=s1[j];
		if(z==s2) {
			ans = true;
			break;	
		}
	}	
	return ans;
}

void solve(){
	cin >> s1 >> s2;
	string s="";
	for(ll i=0; i<(ll)s1.length(); i++){
		if(s1[i]==s2[0] && checkAns(i, s)){
			YES;
			return;
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