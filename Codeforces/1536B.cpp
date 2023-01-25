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
	ll n;
	cin >> n;
	ll arr[26]={0};
	string s;
	cin >> s;
	fo(i, n){
		arr[s[i] - 'a']++;
	}
	ll min = inf;
	ll mini = 0;
	ll x=26;
	fo(i, x) {
		if(min > arr[i]) {
			min  = arr[i];
			mini = i;					
		}
	}
	if(min == 0){
		char y= 97+mini;
		cout << y << endl;
		return ;
	}else{
		set<string> ss;
		for(ll i=0; i<n-1; i++){
			string temp = "";
			temp+= s[i];
			temp+=s[i+1];
			ss.insert(temp);
		}
		for(ll i=0; i<26; i++){
			for(ll j=0; j<26; j++){
				string temp = "";
				 temp += char('a'+i);
				 temp += char('a'+j);
				 if(ss.find(temp) == ss.end()){
				 	cout << temp << endl;
				 	return;
				 }
			}
		}
		
		set<string> ss2;
		for(ll i=0; i<n-2; i++){
			string temp = "";
			temp+=s[i];
			temp+=s[i+1];
			temp+=s[i+2];
			ss2.insert(temp);
		}
		for(ll i=0; i<26; i++){
			for(ll j=0; j<26; j++){
				for(ll k=0; k<26; k++){
					string temp="";
					temp+=char('a'+i);
					temp+=char('a'+j);
					temp+=char('a'+k);
					if(ss2.find(temp) == ss2.end()){
						cout << temp << endl;
						return;
					}
				}
			}
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
	cin >> t;
	while(t--){
		solve();
	}
}