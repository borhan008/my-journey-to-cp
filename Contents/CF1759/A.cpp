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
	string s;
	cin >> s;
	for(ll i=0; i<s.size(); i++){
		string temp1 = "";
	
		for(ll j=i; j<i+2; j++){
			if(j >= s.size()) break;
			temp1 += s[j];
		}
		string temp2 = "";
		for(ll j=i; j<i+4; j++){
			if(j >= s.size()) break;
			temp2 += s[j];
		}
				
		if(s.size() == 1) {
			if(s != "Y" && s!="e" && s!="s"){
				NO;
				return;
			}
		}
		else if(temp2.size() == 3 && temp2 != "Yes" && 
		temp2 != "esY" && temp2 != "sYe"){
			NO;
			return;
			
		}
		else if(
		  
	 temp1 != "Ye" 
		 && temp1 != "sY" 
		 && temp1 != "es"
		
		  && temp1.size() == 2 ){
		 	
			NO;
			return;
		}
		
	}
	YES;
	
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