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
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")


void solve(){
	ll a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	ll n=s.size();
	ll c=0;
	fo(i, n){
		if(s[i]=='0')a--;
		else if(s[i]=='1')b--;
		else c++;
		
	}
	if(c==0){
		for(ll i=0; i<n/2; i++){
			if(s[i] != s[n-i-1]){
				ps("-1");
				return;
			}
		}
		
		if(a>0 || b > 0){
			ps("-1");
			return;
		}
		cout << s << endl;
		return;
	}
	for(ll i=0; i<n/2; i++){
		
		if(s[i] == '?' && s[n-i-1] != '?'){
			if(s[n-i-1] == '0' && a>0){
				s[i] = '0';
				a--;
			}
			else if(s[n-i-1] == '0' && a <= 0){
				cout << -1 << endl;
				return;
			}
			else if(s[n-i-1] == '1' && b>0){
				s[i]='1';
				b--;
			}
			else if(s[n-i-1]=='1' && b<=0){
				cout << -1 << endl;
				return;
			}
		}else if(s[i] != '?' && s[n-i-1] == '?'){
			if(s[i] == '0' && a>0){
				s[n-i-1] = '0';
				a--;
			}
			else if(s[i] == '0' && a <= 0){
				cout << -1 << endl;
				return;
			}
			else if(s[i] == '1' && b>0){
				s[n-i-1]='1';
				b--;
			}
			else if(s[i]=='1' && b<=0){
				cout << -1 << endl;
				return;
			}			
		}
	}	
	for(ll i=0; i<n/2; i++){
		if(s[i] == '?' && s[n-i-1] == '?'){
			if(a>=2){
				s[i]=s[n-i-1]='0';
				a-=2;
			}
			else if(b>=2){
				s[i]=s[n-i-1]='1';
				b-=2;
			}else{
				cout << -1 << endl;
				return;
			}
		}
	}
	if(n%2 == 1 && s[n/2] == '?'){
		if(a>0) s[n/2]='0', a--;
		else if(b>0) s[n/2]='1', b--;
		else {
			cout << -1 << endl;
			return;
		}
	}
	if(a > 0 || b > 0){
		cout << -1 << endl;
		return;
	}
	fo(i, n/2){
		if(s[i] != s[n-i-1]){
			cout << -1 << endl;
			return;
		}
	}
	cout << s << endl;
	/*ll x = count(s.begin(), s.end(), '1');
	ll y= count(s.begin(), s.end(), '0');
	ll b = o - x;
	ll a = z - y;
	
	ll n=s.size();
	for(ll i=0; i<(n/2); i++){
		if(s[i] != '?' && s[n-i-1] == '?'){
			if(a > 0 && s[i]  == '0') {
				s[n-i-1] = '0';
				a--;
			}
			else if(s[i]=='1' && b>0){
				s[n-i-1] = '1';
				b--;
			}
		}
		else if(s[i] == '?' && s[n-i-1] != '?'){
			if(a > 0 && s[n-i-1]=='0'){
				s[i] = '0';
				a--;
				
			}
			else if(s[n-i-1]=='1' && b>0){
				s[i] = '1';
				b--;
			}
			
		
		}
		
		else if(s[i] == '?' && s[n-i-1] == '?'){
			if(a >= 2) {
				s[i] = '0';
				s[n-i-1] = '0';
				a-=2;
			}
			else if(b>=2){
				s[i] = '1';
				s[n-i-1] = '1';
				b-=2;
			}
		}
	}
	
	if(s[n/2] == '?' && n%2 == 1){
			if(b > 0){
				s[n/2]='1';
				b--;
			}else if(a > 0){
				s[n/2] = '0';
				a--;
			}		
	}
	

	if(a==0 && b==0)
	{
		
		for(ll i=0; i<n/2; i++){
			if(s[i] != s[n-i-1])
			{
				cout << -1 << endl;
				return;
			}
		}
		cout << s << endl;
	}
	else cout << -1 << endl;

	
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