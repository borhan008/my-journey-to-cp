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
bool prime[1000000+50];
void seive(){
	prime[0]=true;
	prime[1]=true;
	
	for(ll i=4; i<=(1e6)+49; i+=2) prime[i]=true;
	for(ll i=3; i<=(ll)1e6+49; i+=2){
		
		if(!prime[i])
		for(ll j=i*i; j<(ll)1e6+49; j+=(i)){
			prime[j]=true;
		}
	}
}



void solve(){
	ll n;
	cin >> n;
	if(n==4) {
		YES;
		return;
	}
	if(n%2 == 0){
		 NO;
		 return;
	}	
	ll sq = sqrt(n);
	float sq2 = sqrt(n*1.000);
	if(sq != sq2) NO;
	else {
		if(!prime[sq] && sq*sq==n) YES;
		else NO;
	}
	


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    seive();
 	ll t=1; cin >> t;
 	while(t--) solve();
 	
	return 0;
}