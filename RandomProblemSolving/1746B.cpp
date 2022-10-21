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
	ll n;
	cin >> n;
	ll arr[n];
	ll flag=0;
	ll cnt=0;
	for(ll i=0; i<n; i++){
		cin >> arr[i];
		if(i > 0 && arr[i-1] > arr[i])
		{
			flag=1;
		}
		
	}
	if(flag == 0){
		cout << 0 << endl;
	}else{
		ll l;
		for(ll i=0; i<n; i++){
			if(arr[i] == 1){
				l = i;
				break;
			}
		}
		ll r;
		for(ll i=n-1; i>=0; i--){
			if(arr[i] == 0){
				r=i;
				break;
			}
		}
		while(l < r){
			if(arr[l]==1 && arr[r]==0){
				cnt++;
				arr[r]=1;
				l++;
			}
			else if(arr[l] == 0){
				l++;
			}
			else if(arr[r] == 1)
				r--;
			}
			cout  << cnt << endl;

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