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
#define YES printf("YES\n");
#define NO printf("NO\n");
void solve(){
	ll n, m;
	 cin >> n;
	 mii x;
	 for(ll i=0; i<n; i++){
	 	cin >> m;
	 	x[m]++;
	 }
	 ll ans = 0;
	 ll ansValue;
	 for(auto l : x){
	 	if(l.second == 1){
	 		ans++;
	 		ansValue = l.first;
	 		
	 	}
	 }
	 if(ans==1){
	 	ll flag = 0;
		for(auto l : x){

			if(l.first < ansValue){
				flag=1;
				break;

			}
		}
		if(flag == 0){
			cout << 1 << endl;
		}else{
			flag = 0;
			for(auto l : x){
				if( l.second > 2){
					flag=1;
					break;
				}
			}
			cout << (flag==0 ? 2 : 1)  << endl;
		}
	 }
	 else
	  cout << (ans%2LL == 0LL ? ans/2LL : ans/2LL + 1LL)<< endl;
	
		
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