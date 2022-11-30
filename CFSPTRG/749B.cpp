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
	ll ax,ay,bx,by,cx,cy;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	
	ll dx1 = cx+bx-ax;
	ll dy1=cy+by-ay;
	
	ll dx2=cx+ax-bx;
	ll dy2 = cy+ay-by;
	
	ll dx3 = ax+bx-cx;
	ll dy3 = ay+by-cy;
	
	ll cnt=1;
	vector<vector<ll>> pairs(3);
	pairs[0].push_back(dx1);
	pairs[0].push_back(dy1);
	if(dx1 != dx2 || dy2 != dy1){
		pairs[cnt].push_back(dx2);
		pairs[cnt].push_back(dy2);	
	
		cnt++;			
	}
	 if(dx3 != dx2 || dy3 != dy2){
		pairs[cnt].push_back(dx3);
		pairs[cnt].push_back(dy3);
		cnt++;			
	}
	
	
	pl(cnt);
	for(ll i=0; i<cnt; i++){
		cout << pairs[i][0] << " " << pairs[i][1] << endl;
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