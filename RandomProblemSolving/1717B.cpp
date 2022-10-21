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
#define ps2(x) printf("%s", x)

#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define YES printf("YES\n");
#define NO printf("NO\n");
void solve(){
	ll n, k, r, c;
	cin >> n >> k >> r >> c;
	vector<vector<char>> ar (n, vector<char>(n, '.'));
	r--, c--;
	ar[r][c] = 'X';
	ll x=r, y=c;
	while(x>=0){
		//ar[x][y] = 'X';
		for(ll i=y; i<n; i+=k){
			ar[x][i] = 'X';
		}
		for(ll i=y; i>=0; i-=k){
			ar[x][i] = 'X';
		}
		x--;
		y++;
		if(y >= n) y=0;
	}
	x=r, y=c;
	while(x<n){
		//ar[x][y] = 'X';
		for(ll i=y; i<n; i+=k){
			ar[x][i] = 'X';
		}
		for(ll i=y; i>=0; i-=k){
			ar[x][i] = 'X';
		}
		x++;
		y--;
		if(y<0) y=n-1;
	}
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			cout << ar[i][j];
		}
		cout << endl;
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