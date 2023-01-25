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
	string s1, s2, s3, s4;
	string x,y;
	cin >> s1 >> s2 >> s3 >> s4;
	reverse(s2.begin(), s2.end());
	s1 += s2;
	reverse(s4.begin(), s4.end());
	s3 += s4;
	x=s1;
	y=s3;
	x.erase(x.find('X'), 1);
	y.erase(y.find('X'), 1);
	if(x==y){
		YES;
	}else {
		for(ll i=0; i<4; i++){
			rotate(x.begin(), x.end()-1, x.end());
			if(x==y){
				YES;
				return;
			}
		}
		NO;
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