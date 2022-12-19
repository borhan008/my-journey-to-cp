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
#define ss string 

bool pos(ll x, ll y, ll z){
	if(x==0 && z==y) return true;
	if(x==0) return false;
	
	bool ans = false;
	ans |= pos(x-1, y, z-1);
	ans |= pos(x-1, y, z+1);
	
	return ans;
}
ll fact(ll i){
	if(i==1 || i==0) return 1;
	return i*fact(i-1); 
}
void solve(){
	 ss s1, s2; cin >> s1 >> s2;
	 ll p1=0, m1=0;
	 p1 = count(s1.begin(), s1.end(), '+');
	 m1 =(ll)s1.size()-p1;
	ll ans1 = p1-m1;
	ll p2 = count(s2.begin(), s2.end(), '+');
	ll  m2 =count(s2.begin(), s2.end(), '-');
	ll ans2=p2-m2;
	ll x = (ll)s2.size()-m2-p2;
	double a=0;
	if(ans1==ans2 && x == 0){
		printf("%0.9lf", 1.000);
	}else{
		ll m = ans2 > 0 ? ans2 : 0;
		if(pos(x, ans1, m)){
			printf("%0.9lf", x*1.000/pow(2, x));
		}else{
			printf("%0.9lf", 0.000);
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