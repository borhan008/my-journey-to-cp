#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
	ll n;
	cin >> n;
	ll arr[n+5];
	for(ll i=1; i<=n; i++){
		cin >> arr[i];
	}
	if(n%2 == 1){
		ll ans=0;
		for(ll i=2; i<=n; i+=2){
			ans+= max(0ll,(max(arr[i-1], arr[i+1]) - arr[i]+1));
		}
		cout << ans << endl;
		
	}
	else {
		
		         ll pre[n+3],suf[n+3];
            pre[0]=0;
            for(int i=2;i<=n;i+=2)
            {
                pre[i]=pre[i-2]+max(0ll,max(arr[i-1],arr[i+1])-arr[i]+1);
            }
            suf[n+1]=0;
            for(int i=n-1;i>=1;i-=2)
            {
                suf[i]=suf[i+2]+max(0ll,max(arr[i-1],arr[i+1])-arr[i]+1);
            }
            ll ans=1e18;
            for(int i=1;i<=n;i+=2)
            {
                ll x=pre[i-1]+suf[i+2];
                ans=min(ans,x);
            }
            cout<<ans<<endl;
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