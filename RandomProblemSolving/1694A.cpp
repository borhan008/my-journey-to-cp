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
#define ps(x) printf("%s", x)

#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

void solve(){
	ll a,b;
	cin >> a >> b;
	if(a==b){
		for(ll i=1; i<=(a+b); i++)
		ps(i%2 == 0 ? "0" : "1");
	}else {
		ll i=0, j=0;
		ll last=1;
		while(i<a || j<b){
			if(i<a && last==0 && j <b){
				cout << "1";
				j++;
				last=1;
			}
			else if(i<a && last==1 && j<b){
				cout << "0";
				i++;
				last=0;
			}
			else if(i<a){
				cout << "0";
				i++;
				
			}else{
				cout << "1";
				j++;
			}
		}
	
	}
	cout << endl;
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