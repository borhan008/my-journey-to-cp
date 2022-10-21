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
#define ps(x) printf("%s\n", x)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

void solve(){
	ll n, y;
	cin >> n;
	mii x;
	vi v;
	ll pos=0, neg=0, zero=0;
	for(ll i=0;i<n; i++){
		cin >> y;
		if(y > 0){
			pos++;
			v.pb(y);
			
		}
		else if(y < 0){
			neg++;
			v.pb(y);
		}else{
			zero++;
		}
		x[y]++;

	}

	if(pos>2 || neg > 2){
		cout << "NO" << endl;
	}else{
		ll flag = 1;
		ll zeroCount =zero > 3 ? 3 : zero;
		while(zeroCount--){
			v.pb(0);
		}
		//sortall(v);
		
		if(v.size() < 3){
			cout << "NO" << endl;
		}else{
		
		for(ll i=0; i<v.size(); i++){
			for(ll j=i+1; j<v.size(); j++){
				for(ll k = j+1; k<v.size(); k++){
					ll z = v[i]+v[j]+v[k];
					if(!x[z]){
						flag = 0;
						break;
					}
				}
				if(flag ==0) break;
			} 
			if(flag == 0) break;
		}
		ps(flag == 1 ? "YES" : "NO");
		}
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
	cin >> t;
	while(t--){
		solve();
	}
}