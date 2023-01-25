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

bool checkPalindrome(string s){
	ll i=0;
	ll j=s.length()-1;
	while(i<j){
		if(s[i] != s[j] || s[i]=='1' || s[j]=='1') return false;
		i++;
		j--;
	}
	return true;
}


void solve(){
	string s; cin >> s;
	ll ans=0;
	for(ll i=0; i<=(ll)s.length()-2; i++){
		string x1 = "";
		x1+=s[i];
		x1+=s[i+1];
		if(i+2 < (ll)s.length()){
			string x2="";
			x2+=s[i];
			x2+=s[i+1];
			x2+=s[i+2];
			if(checkPalindrome(x2)){
				s[i+2]='1';
				ans++;
			}
		}
		if(checkPalindrome(x1)){
			
			s[i+1]='1';
			ans++;
		}
	}
	printf("%lld\n", ans);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}