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
	ll n;
	string s;
	cin >> n >> s;
	mii rem;
	ll i=0;
	while(i<n){
		char j=s[i];
		if(s[i] == s[i+1]){
			rem[i+1]++;
			i+=2;
			while(true){
				if(j==s[i]){
					rem[i]++;
					i++;
				}else{
					i++;
					break;
				}
			}
			
		}else{
			i+=2;
		}
	}
	if((n-(ll)rem.size())%2 == 0){
		cout << rem.size()<<endl;
		fo(i, n){
			if(rem[i] > 0) continue;
			cout << s[i];
		}
	}else if(rem.size()+1 == n){
		cout << rem.size()+1 << endl;
	}
	else{
		cout << rem.size()+1 <<endl;
		if(rem[n-1] > 0) n-=2;
		else n--;
		fo(i, n){
			if(rem[i] > 0) continue;
			cout << s[i];
		
		}		
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