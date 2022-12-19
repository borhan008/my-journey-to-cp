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
#define mod (ll)(1e9+7)

ll moduu(ll a)
{
    if (a == 0)
        return 1;
    if (a == 1)
        return 2;
    ll mul = 1;
    mul = moduu(a / 2);
    if (a & 1)
        return (2 * (mul % mod) * (mul % mod)) % mod;
    else
        return ((mul % mod) * (mul % mod)) % mod;
}

void solve(){
	ll n;
	cin >> n;
	ll a[n], b[n];
	input(n, a);
	input(n, b);
	mii x1,x2;
	fo(i, n){
		x1[a[i]]=b[i];
	}
	
	
	ll ans=0;
	for(auto l:x1){
		if(x1[l.second]==l.first){
			ans++;
		}
	}
	cout << (ans > 0 ? (moduu(ans/2) - 1) : 0) +  
	(ans > 0 && ans != n ? (ans%mod/2 + (n%2==0 ? 1 : 0))  : 0) 
	+ (ans == n ? 1 : 2) << endl;
	
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}