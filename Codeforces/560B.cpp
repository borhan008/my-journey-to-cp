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
	ll m,n;
	ll a1, b1;
	ll a2, b2;
	cin >> m >> n >> a1 >> b1 >> a2 >> b2;
	if(m >= a1 && n >=b1){
		ll newM = m - a1;
		ll newN = n - b1;
		if((newM >= a2 && n >= b2) || 
		(newM >= b2 && n >= a2) ||
		(newN >= a2 && m >= b2) || 
		(newN >= b2 && m >= a2)
		){
			YES;
		}else{
			if(m >= b1 && n >= a1){
				ll newM = m - b1;
				ll newN = n - a1;
				if((newM >= a2 && n >= b2) || 
				(newM >= b2 && n >= a2) ||
				(newN >= a2 && m >= b2) || 
				(newN >= b2 && m >= a2)
				){
					YES;
				}else{
					NO;
					
				}
			}else{
				NO;
			}
			
		}
	}else if(m >= b1 && n >= a1){
				ll newM = m - b1;
				ll newN = n - a1;
		if((newM >= a2 && n >= b2) || 
		(newM >= b2 && n >= a2) ||
		(newN >= a2 && m >= b2) || 
		(newN >= b2 && m >= a2)
		){
			YES;
		}else{
			NO;
			
		}
	}else{

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