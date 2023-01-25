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
	ll m;
	string s1, s2;
	cin >> m >> s1 >> s2;
	char z=s1[m-1];
	ll change=0;
	ll ps0[m], ps1[m];
	ps0[0] = (s1[0] == '0' ? 1 : 0);
	ps1[0] = (s1[0] == '1' ? 1 : 0);
	for(ll i=1; i<m; i++){
		ps0[i] = ps0[i-1]+(s1[i] == '0');
	}
	for(ll i=1; i<m; i++){
		ps1[i] = ps1[i-1]+(s1[i] == '1');
	}	
	for(ll i=m-1; i>=0; i--){
		if(z!=s2[i]){
			//ll cnt1 = count(s1.begin(),s1.begin()+i+1, '1');
			 ll cnt0 = ps1[i];
			ll  cnt1 = ps0[i];
			//ll cnt0 = count(s1.begin(),s1.begin()+i+1, '0');
			 if(cnt1 != cnt0 && z!=s2[i]){
			 	NO;
			 	return;
			 }	
			 if(z != s2[i]){
			 	change++;
			 }
		
				  
		}
		if(change%2 == 1){
			if(s1[i-1] == '0'){
				z = '1';
			}else z='0';
		}else{
			z = s1[i-1];
		}
	}
	
	YES;
	return;
	

}

int main(){
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}