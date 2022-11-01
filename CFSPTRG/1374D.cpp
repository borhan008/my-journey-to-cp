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
#define YES printf("YES\n")
#define NO printf("NO\n")
void solve(){
	ll n, k, y;
	cin >> n >> k;
	ll x=0;
	ll cnt=0;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin >> y;
		arr[i]= (y%k==0 && y>=k)   ? 0 : (y/k + 1)*k-y;
	}
	ll i=0;

	sort(arr, arr+n);
	/**
	// reason of TLE
	fo(i,n){
		if(arr[i] == 0) continue;
		
		else {
			ll j = i+1;
			if(j >= n) continue;
			while(arr[i] == arr[j]){
				arr[j]+=k;
				j++;
			}
			
		}
	}
	**/
	
	//x++; cnt++;
	//sort(arr, arr+n);
	//fo(i,n) cout << arr[i] << " ";
	//cout << endl;
	
	
	
	sort(arr2, arr2+n);	
	for(i=0; i<n; i++){
		if(arr[i] == 0) continue;
		if(arr2[i] - x==0){
			arr2[i] = 0;
			cnt++;
			x++;
			//cout << i << x << " ";
		}else{
			cnt += abs(arr2[i] - x +1);
			x += abs(arr2[i] - x + 1);
		}
		
	}
	pl(cnt == 1 ? 0 : cnt);
	
	
	/*

	easy solution
	ll arr2[n];
	arr2[0] = arr[0];
	ll ans = arr2[0];	
	for(i=1; i<n; i++){
		if(arr[i] == 0) arr2[i]=0;
		else if(arr[i] == arr[i-1]) arr2[i] = arr2[i-1]+k;
		else arr2[i] = arr[i];
		ans = max(ans, arr2[i]);
	}
*/
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