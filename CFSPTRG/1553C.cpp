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
	string s;
	cin >> s;
	string odd=s, even=s;

	ll scoreOdd=0;
	ll scoreEven=0;
	ll ans=10;
	for(ll i=1; i<=10; i++){
		if(s[i-1]=='1' && i%2 == 0) scoreEven++;
		else if(s[i-1] == '1' && i%2==1) scoreOdd++;
		else if(s[i-1]=='?'){
			if(i%2 == 0) scoreEven++;
		}
			if(scoreEven 
			> scoreOdd+floor((10*1.000-i)/2)){
				ans = i;
				break;
			}else if(scoreOdd 
			> scoreEven+ceil((10*1.000-i)/2)){
				ans = i;
				break;
			}		
	}
	scoreEven = 0;
	scoreOdd=0;
	for(ll i=1; i<=10; i++){
		if(s[i-1]=='1' && i%2 == 0) scoreEven++;
		else if(s[i-1] == '1' && i%2==1) scoreOdd++;
		else if(s[i-1]=='?'){
			if(i%2 == 1) scoreOdd++;
		}
			if(scoreEven 
			> scoreOdd+floor((10*1.000-i)/2)){
				ans = min(i, ans);
				break;
			}else if(scoreOdd 
			> scoreEven+ceil((10*1.000-i)/2)){
				ans = min(i, ans);
				break;
			}		
	}	
	pl(ans);

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