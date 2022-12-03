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
	ll n;
	cin >> n;
	ll a[n];
	input(n, a);
	vi pos, neg;
	fo(i, n){
		if(a[i] > 0) pos.pb(a[i]);
		else if(a[i] < 0) neg.pb(a[i]);
	}	
	
	if(pos.size() > 0){
		
		cout << 1 << " ";
		cout << neg[0] << endl;
		cout << (ll)pos.size() << " ";
		fo(i,(ll)pos.size()){
			cout << pos[i] << " ";
		}	
		cout << endl;
		cout << 1 + (ll)neg.size() - 1 << " " << 0 << " ";
		for(ll i=1; i<(ll)neg.size(); i++){
			cout << neg[i] << " ";
		}
	}else{
		cout << 1 << " " << neg[0] << endl;
		if((ll)neg.size()%2 == 1){
			cout <<(ll) neg.size() - 1 << " ";
			for(ll i=1; i<(ll)neg.size(); i++) cout << neg[i] << " ";	
			cout << endl;
			cout << 1 << " " << 0 << endl;	
		}else{
			cout << (ll)neg.size() - 2 << " ";
			for(ll i=1; i<(ll)neg.size()-1; i++) cout << neg[i] << " ";	
			cout << endl;
			cout << 2 << " " << 0 <<  " " << neg[(ll)neg.size()-1] << endl;			
		}	
	}

}

int main(){
	ll t;
	//cin >> t;
	t=1;
	while(t--) solve();
	return 0;
}