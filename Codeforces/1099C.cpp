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
#define input(n,x) fo(i, n) sl(x[i])
#define output(n, x) fo(i, n) printf("%lld ", x[i])
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
#define IMPOSSIBLE printf("Impossible\n")
void solve(){
	ll n;
	string s;
	cin >> s >> n;
	ll candy=0, snowflake=0;
	candy = count(s.begin(), s.end(), '?');
	snowflake = count(s.begin(), s.end(), '*');
	ll k = s.length() - candy - snowflake;
	if(n < ((ll)s.length() - candy*2 - snowflake*2)){
		
		IMPOSSIBLE;
		return;
	}
	

	if(n==k){
		fo(i, (ll)s.length()){
			if(s[i] == '*' || s[i] == '?') continue;
			cout << s[i];
		}
	}else if(k > n){
		ll rem = (((ll)s.length()-candy-snowflake) - n);
		string x="";
		//cout << rem;
		fo(i, (ll)s.length()){
			if((s[i+1] == '?' || s[i+1] == '*' )&& rem > 0){
				i++;
				rem--;
				continue;
			}
			if(s[i] == '?' || s[i] == '*') continue;
			 x+=s[i];
		}
		
		if((ll)x.length() == n) cout << x;
		else IMPOSSIBLE;
	}else{
		ll rem = (n-((ll)s.length()-candy-snowflake));
		string x="";
		if(rem < 0)  rem = (-1)*rem;
		fo(i, (ll)s.length()){
			
			if(( s[i+1] == '*' ) && rem >= 1 && s[i] != '*'){
				for(ll j=1; j<=rem; j++){
					x+=s[i];
				
				}	
				x+=s[i];				
				i++;
					rem=0;
				continue;
			}
			else if(s[i] == '?' || s[i] == '*') continue;
			else x+=s[i];
			
		}		
		if((ll)x.length() == n) cout << x;
		else IMPOSSIBLE;
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