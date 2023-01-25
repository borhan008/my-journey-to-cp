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


void solve(){
	ll n,a,b;
	cin >> n >> a >> b;
	if(n==1){
		if(a==b) cout << 1 << endl;
		else cout << 0 << endl;
		cout << a << ":" << b;
	}else{
		cout <<( (a+b)<n ? n-(a+b) : 0 )<< endl;
		while(n>1 && (a>0 || b>0)){
			//cout << a << " " << b << endl;
			if(a<=b && a>0) {
				cout << "1:0" << endl;
				a--;
				n--;
			}else if(b>0){
				cout << "0:1" << endl;
				b--;
				n--;
			}else if(a>=0){
				cout << "1:0" << endl;
				a--;
				n--;
			}
			
		}
		while(n){ 
			cout << a <<":"<<b << endl;
			n--;
		}
	}
	
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	ll t=1; //cin >> t;
 	while(t--) solve();
 	
	return 0;
}