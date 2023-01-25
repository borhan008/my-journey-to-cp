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
void solve(){
	ll n, l;
	cin >> n >> l;
	string s;
	cin >> s;
	int i=0;
	if(n==l){
		NO;
		return;
	}
	ll k = l;
	ll flag=0;
	while( i < l && k < (ll)s.length()){
		
		if(s[k] == '.'){
			if(s[i] == '0') s[k] = '1';
			else if(s[i] == '1') s[k] = '0';
			else {
				s[i] = '0';
				s[k] = '1';
				flag=1;
				
				break;
			}
		}else if(s[k] == '0'){
			if(s[i] == '0'  && k == (ll)s.length()-1) {
				NO;
				return;
			}
			else if(s[i] == '.') {
				s[i] = '1';
				flag=1;
			
				break;				
			}
						
		}else{
			if(s[i] == '1' && k == (ll)s.length()-1) {
				NO;
				return;
			}
			else if(s[i] == '.') {
				s[i] = '0';
				flag=1;
					
				break;					
			}	
		}
		i++;
		k++;
	}
	if(l!=1)
	for(ll i=0; i<(ll)s.length(); i++){
		if(s[i] == '.') s[i] = '0';
	}
	else{
		char x;
		if(s[0] == '.'){
			ll o =0, z=0;
			for(ll i=0; i<(ll)s.length(); i++){
				if(s[i] == '0') {z++;break;}
				if(s[i] == '1') {o++;break;}
			
			}
			if(o > 0) s[0]='0';
			else if(z > 0) s[0]='1';
			else s[0] = '0';
			
		}
		if(s[0] == '0') x='1';
		else x='0'; 
		for(ll i=0; i<(ll)s.length(); i++){
			if(s[i] == '.') s[i] = x;
		}
	}
	cout << s;

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