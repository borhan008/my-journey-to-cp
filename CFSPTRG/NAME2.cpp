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
#define fo1(i,n) for(i=1; i<=n; i++)

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


bool check(string s1, string s2){
	ll n1=s1.length();
	ll n2=s2.length();
	ll i=0;
	ll j=0; 
	fo(i, n1){
		//cout << s1[i] << " " << s2[j] << endl;
		if(s1[i] == s2[j]) j++;
		if(j >= n2) break;
	}
	return (j==n2);
}

void solve(){
	string s1, s2;
	cin >> s1 >> s2;
	bool cnt = (check(s1, s2) or check(s2, s1));
	//check(s2, s1);
	cnt?YES:NO;
	
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